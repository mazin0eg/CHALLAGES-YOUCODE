#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXCONTACT 100

typedef struct{
    char nom[50];
    char telephone[50];
    char email[50];
}contacte;

contacte contacts[MAXCONTACT]= {
    { "khadijaissar","0707885233","khadijaissar@gmail.com"},
    { "salmafarissi","0704358416","salmafarissi@gmail.com"},
    { "oussamajiqqir","0625988814","oussamajiqqir@gmail.com"},
    { "yahyacoundi","0783145000","yahyacoundi@gmail.com"},
    { "ahmedelkaami","0636489912","ahmedelkarami@gmail.com"},
    { "anouarelasri","0733452787","anouarelasri@gmail.com"},
};
int nombre_des_contact = 6;
void menu() {
    printf("~~~~~~~~~~~ Menu de Gestion de Contacts ~~~~~~~~~~~\n");
    printf("1. Ajouter un contact\n");
    printf("2. Afficher tous les contacts\n");
    printf("3. Rechercher un contact par nom\n");
    printf("4. Supprimer un contact\n");
    printf("5. Modifier un contact\n");
    printf("0. Quitter\n");
    printf("Votre choix : ");
}
int i;
void ajouter(){
    if(nombre_des_contact < MAXCONTACT){
        printf("entrez le nom du contact: ");
        scanf("%s",contacts[nombre_des_contact].nom);

        printf("entrez le numero de telephone  du contact: ");
        scanf("%s",contacts[nombre_des_contact].telephone);

        printf("entrez l'adresse email du contact: ");
        scanf("%s",contacts[nombre_des_contact].email);
        nombre_des_contact++;
    }
    else{
        printf("la liste des contcts est pleine");
    }
}

void affichage(){
    if(nombre_des_contact == 0){
        printf("la liste des contact est vide");
    }
    else{
        for( i = 0; i < nombre_des_contact ;i++){
            printf("nom du contact : %s\n",contacts[i].nom);
            printf("numero du telephone de contact : %s\n",contacts[i].telephone);
            printf("l'email du contact : %s\n",contacts[i].email);
            printf("_______________________________\n");
        }
    }
}
int i;
void recherche(){
    char nom_de_recherche[50];
    printf("entrez le nom de contacte a recherche :");
    scanf("%s",nom_de_recherche);

    int trouve = 0;
    for( i = 0;i < nombre_des_contact;i++){
        if(strcmp(contacts[i].nom,nom_de_recherche) == 0){
            printf("nom du contact : %s\n",contacts[i].nom);
            printf("numero du telephone de contact : %s\n",contacts[i].telephone);
            printf("l'email du contact : %s\n",contacts[i].email);
            trouve = 1;
            break;
        }
    }
    if(!trouve){
        printf("ce contact n existe pas!\n");
    }
}
int i;
int j;
void suppretion() {
    char nom_recherche[50];
    printf("Entrez le nom du contact à supprimer : ");
    scanf("%s", nom_recherche);

    int trouve = 0;
    for (int i = 0; i < nombre_des_contact; i++) {
        if (strcmp(contacts[i].nom, nom_recherche) == 0) {
            for (int j = i; j < nombre_des_contact - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            nombre_des_contact--;
            printf("Le contact a été supprimé.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Contact non trouvé.\n");
    }
}


int i;
void modification() {
    char nom_de_recherche[50];
    printf("entrez le nom du contact a modifier : ");
    scanf("%s", nom_de_recherche);
    int trouve = 0;
    for (i = 0; i < nombre_des_contact; i++) {
        if (strcmp(contacts[i].nom, nom_de_recherche) == 0) {
            printf("entrez le nouveau nom : ");
            scanf("%s", contacts[i].nom);

            printf("entrez le nouveau numéro de téléphone : ");
            scanf("%s", contacts[i].telephone);

            printf("Entrez le nouvel e-mail : ");
            scanf("%s", contacts[i].email);

            printf("Le contact a été modifié avec succès.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("ce contact n existe pas!\n");
    }
}
int main() {
    int choix;
    do{
        menu();
        scanf("%d",&choix);
        switch(choix){
             case 1:
                ajouter();
                break;
            case 2:
                affichage();
                break;
            case 3:
                recherche();
                break;
            case 4:
                suppretion();
                break;
            case 5:
                modification();
                break;
                default:
                if(choix != 0){
                    printf("choix invalie");
                }
        }
    }while( choix != 0);

    return 0;
}

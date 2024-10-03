#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXCONTACT 200
typedef struct
{
  int jour;
  int mois;
  int anné;
}date;
enum statut {valide,reporte,annule,traite};
// reservation des rendez vous dentaire
typedef struct{
    char nom[50];
    char prenom[50];
    char telephone[50];
    enum statut statuts;
    int age;
    
    date date_de_reservation;


    
}person;

person clients[MAXCONTACT]= {
    { "khadija","issar","0707885233",18,valide},
    { "salma","farissi","0704358416",18,valide},
    { "oussama","jiqqir","0625988814",22,annule},
    { "yahya","coundi","0783145000",38,traite},
    { "ahmed","elkaami","0636489912",24,valide},
    { "anouar","elasri","0733452787",12,reporte},
    { "ali","lsfer","0733001287",23,valide},
    { "aalae","nadir","0633452787",32,annule},
    { "khadija","tawfiq","0604883411",12,reporte},
};
int les_persone = 10;
void menu() {
    printf("~~~~~~~~~~~ Menu reservation des rendez vous dentaire ~~~~~~~~~~~\n");
    printf("             1. Ajouter un client\n");
    printf("             2. Afficher tous les clients\n");
    printf("             3. Rechercher un client par nom\n");
    printf("             4. Supprimer un clients\n");
    printf("             5. Modifier un clients\n");
    printf("             0. Quitter\n");
    printf("Votre choix : ");
}
int i;
void ajouter(){
  
        printf("entrez le nom de la persone: ");
        scanf("%s",clients[les_persone].nom);

        printf("entrez le prenom de la persone: ");
        scanf("%s",clients[les_persone].prenom);

        printf("entrez le numero de telephone  de la persone: ");
        scanf("%s",clients[les_persone].telephone);

        printf(" entrez l'age de la persone: ");
        scanf("%d",&clients[les_persone].age);

        printf(" entrez le statut de la persone: ");
        scanf("%s",clients[les_persone].statuts);
        les_persone++;
    
  
}

void affichage(){
    if(les_persone == 0){
        printf("la liste des clients est vide");
    }
    else{
        for( i = 0; i < les_persone ;i++){
            printf("nom de la persone : %s\n",clients[i].nom);
            printf("prenom de la persone : %s\n",clients[i].prenom);
            printf("numero de telephone  de la persone : %s\n",clients[i].telephone);
            printf("l'age de la persone : %d\n",clients[i].age);
            printf("le statut de la persone : %s\n",clients[i].statuts);
            printf("_______________________________\n");
        }
    }
}
int i;
void recherche(){
    char nom_de_recherche[50];
    printf("entrez le nom de client:");
    scanf("%s",nom_de_recherche);

    int trouve = 0;
    for( i = 0;i < les_persone;i++){
        if(strcmp(clients[i].nom,nom_de_recherche) == 0){
             printf("nom de la persone : %s\n",clients[i].nom);
            printf("prenom de la persone : %s\n",clients[i].prenom);
            printf("numero de telephone  de la persone : %s\n",clients[i].telephone);
            printf("l'age de la persone : %d\n",clients[i].age);
            printf("le statut de la persone : %s\n",clients[i].statuts);
            trouve = 1;
            break;
        }
    }
    if(!trouve){
        printf("ce client n existe pas!\n");
    }
}
int i;
int j;
void suppretion() {
    char nom_recherche[50];
    printf("Entrez le nom du clients a supprimer : ");
    scanf("%s", nom_recherche);

    int trouve = 0;
    for (int i = 0; i < les_persone; i++) {
        if (strcmp(clients[i].nom, nom_recherche) == 0) {
            for (int j = i; j < les_persone - 1; j++) {
                clients[j] = clients[j + 1];
            }
            les_persone--;
            printf("Le clients a ete supprime.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Clients non trouve.\n");
    }
}


int i;
void modification() {
    char nom_de_recherche[50];
    printf("entrez le nom de client a modifier : ");
    scanf("%s", nom_de_recherche);
    int trouve = 0;
    for (i = 0; i < les_persone; i++) {
        if (strcmp(clients[i].nom, nom_de_recherche) == 0) {
            printf("entrez le nouveau nom : ");
            scanf("%s", clients[i].nom);

            printf("entrez le nouveau prenom : ");
            scanf("%s", clients[i].prenom);

            printf("entrez le nouveau numero de telephone : ");
            scanf("%s", clients[i].telephone);

            printf("Entrez le nouveau age : ");
            scanf("%d", &clients[i].age);

            printf("Entrez le nouveau statut : ");
            scanf("%s", clients[i].statuts);

            printf("Le client a  ete modifie avec succes.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("ce client n existe pas!\n");
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
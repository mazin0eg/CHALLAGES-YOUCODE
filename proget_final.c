#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXCONTACT 200

enum statut {valide, reporte, annule, traite};

typedef struct {
    int id;
    char nom[50];
    char prenom[50];
    char telephone[50];
    int age;
    enum statut statuts;
    struct {
        int jour;
        int mois;
        int annee;
    } date_de_reservation;
} person;

person clients[MAXCONTACT]= {
    { 1,"khadija","issar","0707885233",18,valide,{01,01,2024}},
    { 2,"salma","farissi","0704358416",18,valide,{23,04,2024}},
    { 3,"oussama","jiqqir","0625988814",22,annule,{11,10,2024}},
    { 4,"yahya","coundi","0783145000",38,traite,{05,12,2024}},
    { 5,"ahmed","elkaami","0636489912",24,valide,{23,12,2024}},
    { 6,"anouar","elasri","0733452787",12,reporte,{16,9,2024}},
    { 7,"ali","lsfer","0733001287",23,valide,{01,11,2024}},
    { 8,"aalae","nadir","0633452787",32,annule,{01,12,2024}},
    { 9,"khadija","tawfiq","0604883411",12,reporte,{01,3,2024}},
};
char statut_str[4][10] = {"valide", "reporte", "annule", "traite"};
int les_persone = 9;       //  0           1         2           3
int id_compteur =10;
void menu() {
    printf("~~~~~~~~~~~ Menu reservation des rendez vous dentaire ~~~~~~~~~~~\n");
    printf("             1. Ajouter un client\n");
    printf("             2. Afficher tous les clients\n");
    printf("             3. Rechercher un client par id\n");
    printf("             4. Supprimer un clients\n");
    printf("             5. Modifier un clients\n");
    printf("             6. Trier par nom\n");
    printf("             7. Tri par statut\n");
    printf("             8. Rechercher un client par nom\n");
    printf("             9. Moyenne d'age\n");
    printf("            10. Nombre des ages par trache\n");
    printf("            11. le nombre total de reservations par statut\n");
    printf("             0. Quitter\n");
    printf("Votre choix : ");
}
int i;
void ajouter(){
        clients[les_persone].id = id_compteur++;
        printf("entrez le nom de la persone: ");
        scanf("%s",clients[les_persone].nom);

        printf("entrez le prenom de la persone: ");
        scanf("%s",clients[les_persone].prenom);

        printf("entrez le numero de telephone  de la persone: ");
        scanf("%s",clients[les_persone].telephone);

        printf(" entrez l'age de la persone: ");
        scanf("%d",&clients[les_persone].age);

        printf("entrez le statut de la persone:(0: valide, 1: reporte, 2: annule, 3: traite) ");
        // scanf("%s",statut_str[clients[i].statuts]);
        int statut_tmp;
        scanf("%d",&statut_tmp);
        clients[les_persone].statuts = (enum statut)statut_tmp;
while(1){
        printf("entrez le jour de la reservation : ");
        scanf("%d", &clients[les_persone].date_de_reservation.jour);
if(clients[les_persone].date_de_reservation.jour <= 30){
    break;
}
else printf("cette date est invalie\n");
}
while(1){
        printf("entrez le mois de la reservation : ");
        scanf("%d", &clients[les_persone].date_de_reservation.mois);
        if(clients[les_persone].date_de_reservation.mois <=12){
            break;
        }
        else printf("ce mois est invalie\n");
}
while(1){
        printf("entrez l'annee de la reservation : ");
        scanf("%d", &clients[les_persone].date_de_reservation.annee);
        if(clients[les_persone].date_de_reservation.annee >= 2024){
            break;
        }
        else printf("cette anne est invalie\n");
}
        les_persone++;
        printf("client ajoute avec l'ID : %d\n",clients[les_persone - 1].id);


}

void affichage(){
    if(les_persone == 0){
        printf("la liste des clients est vide");
    }
    else{
        for( i = 0; i < les_persone ;i++){
            printf("ID: %d\n", clients[i].id);
            printf("nom de la persone : %s\n",clients[i].nom);
            printf("prenom de la persone : %s\n",clients[i].prenom);
            printf("numero de telephone  de la persone : %s\n",clients[i].telephone);
            printf("l'age de la persone : %d\n",clients[i].age);
            printf("le statut de la persone : %s\n",statut_str[clients[i].statuts]);
            printf("la date de reservation : %d/%d/%d\n",
                   clients[i].date_de_reservation.jour,
                   clients[i].date_de_reservation.mois,
                   clients[i].date_de_reservation.annee);
            printf("_______________________________\n");
        }
    }
}
int i;
void rechercheid(){
    int id_recherche;
    printf("Entrez l'ID du client a rechercher: ");
    scanf("%d", &id_recherche);

    int trouve = 0;
    for( i = 0;i < les_persone;i++){
        if(clients[i].id == id_recherche){
            printf("client trouve:\n");
            printf("ID: %d\n", clients[i].id);
            printf("nom de la persone : %s\n",clients[i].nom);
            printf("prenom de la persone : %s\n",clients[i].prenom);
            printf("numero de telephone  de la persone : %s\n",clients[i].telephone);
            printf("l'age de la persone : %d\n",clients[i].age);
            printf("le statut de la persone : %s\n",statut_str[clients[i].statuts]);
            printf("la date de reservation : %d/%d/%d\n",
                   clients[i].date_de_reservation.jour,
                   clients[i].date_de_reservation.mois,
                   clients[i].date_de_reservation.annee);
            trouve = 1;
            break;
        }
    }
    if(!trouve){
        printf("ce client n existe pas!\n");
    }
}
void recherchenom(){
    char nom_recherche[20];
    printf("Entrez le nom du client a rechercher: ");
    scanf("%s", nom_recherche);

    int trouve = 0;
    for( i = 0;i < les_persone;i++){

        if(strcmp(clients[i].nom,nom_recherche)==0){
            printf("client trouve:\n");
            printf("ID: %d\n", clients[i].id);
            printf("nom de la persone : %s\n",clients[i].nom);
            printf("prenom de la persone : %s\n",clients[i].prenom);
            printf("numero de telephone  de la persone : %s\n",clients[i].telephone);
            printf("l'age de la persone : %d\n",clients[i].age);
            printf("le statut de la persone : %s\n",statut_str[clients[i].statuts]);
            printf("la date de reservation : %d/%d/%d\n",
                   clients[i].date_de_reservation.jour,
                   clients[i].date_de_reservation.mois,
                   clients[i].date_de_reservation.annee);
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
     int id_recherche;
    printf("entrez l'ID du client a supprimer: ");
    scanf("%d", &id_recherche);

    int trouve = 0;
    for (int i = 0; i < les_persone; i++) {
        if (clients[i].id == id_recherche) {
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
    int id_recherche;
    printf("Entrez l'ID du client a modifier : ");
    scanf("%d", &id_recherche);
    int trouve = 0;
    for (i = 0; i < les_persone; i++) {
        if (clients[i].id == id_recherche) {
            printf("client trouve:\n");
            printf("ID: %d\n", clients[i].id);

            printf("entrez le nouveau nom : ");
            scanf("%s", clients[i].nom);

            printf("entrez le nouveau prenom : ");
            scanf("%s", clients[i].prenom);

            printf("entrez le nouveau numero de telephone : ");
            scanf("%s", clients[i].telephone);

            printf("Entrez le nouveau age : ");
            scanf("%d", &clients[i].age);

            printf("Entrez le nouveau statut : ");
            scanf("%d", &statut_str[clients[i].statuts]);

            printf("Entrez la nouvelle date de reservation (jour/mois/annee) : ");
            scanf("%d %d %d", &clients[i].date_de_reservation.jour,
                  &clients[i].date_de_reservation.mois,
                  &clients[i].date_de_reservation.annee);

            printf("Le client a  ete modifie avec succes.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("ce client n existe pas!\n");
    }
}
//c______________trie_PAR_NOM________________________c
void tri_par_nom(){
    for(i=0;i < les_persone;i++){
        for(int j = 0;j < les_persone -i-1;j++){
            if(strcmp(clients[j].nom,clients[j+1].nom)<0){
                person tmp = clients[j];
                clients[j]=clients[j+1];
                clients[j+1]=tmp;
            }
        }

    }
    affichage();
}
//c_________________tri_par_status____________c

int enomtostring(enum statut statuts){
switch(statuts){
    // {valide, reporte, annule, traite}
    case valide:
    return 0;
    break;
    case reporte:
    return 1;
    break;
    case annule:
    return 2;
    break;
    case traite:
    return 3;
    break;
    default:
    return -1;
    break;
}
}
void tri_par_statut(){
    for(i=0;i < les_persone;i++){
        for(int j = 0;j < les_persone -i-1;j++){
            if(enomtostring(clients[j].statuts) > enomtostring(clients[j+1].statuts) ){
                person tmp = clients[j];
                clients[j]=clients[j+1];
                clients[j+1]=tmp;
            }
        }

    }
    affichage();
}
//c________statistique1__________c
void moyennedage(){
    int compteur = 0;
    int sum=0;
    for(i=0;i < les_persone;i++){
        if(clients[i].statuts==valide){
            compteur++;
            sum = sum + clients[i].age;
        }
    }
    printf("le somme d age des clients valide est %d\n",(sum/compteur));
}
void nombredage(){
int trach1=0,trach2=0,trach3=0;
     for(i=0;i < les_persone;i++){
         if(clients[i].age <= 18){
            trach1++;
         }
         else if(clients[i].age >= 19 && clients[i].age <= 35){
            trach2++;
         }
         else{
          trach3++;
        }
     }
     printf("le nombre de patients  d'âge (0-18ans): %d\n",trach1);
     printf("le nombre de patients  d'âge (19-35ans): %d\n",trach2);
     printf("le nombre de patients  d'âge (+36ans): %d\n",trach3);
}
void nombre_total_par_statut(){
printf("entrez le statut :(0: valide, 1: reporte, 2: annule, 3: traite) ");
        int statut_tmp;
        scanf("%d",&statut_tmp);
    int compteur = 0;
    for(i=0;i < les_persone;i++){
        if(clients[i].statuts==(enum statut)statut_tmp){
            compteur++;

        }
    }
    printf("le nombre total de réservations par statut est %d\n",compteur);
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
                rechercheid();
                break;
            case 4:
                suppretion();
                break;
            case 5:
                modification();
                break;
            case 6:
                tri_par_nom();
                break;
            case 7:
                tri_par_statut();
                break;
            case 8:
                recherchenom();
                break;
            case 9:
                moyennedage();
                break;
            case 10:
                nombredage();
                break;
            case 11:
                nombre_total_par_statut();
                break;

                default:
                if(choix != 0){
                    printf("choix invalie");
                }
        }
    }while( choix != 0);

    return 0;
}

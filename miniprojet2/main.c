#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
char titre[100][100]={"TheCprograminglanguage","theartofcomputerprogramming","codecomplete","ThinkLikeAProgrammer","TeachYourselfGameProgrammingin21Days"};
char auteur[100][100]={"Brian Kernighan et Dennis Ritchie","donald e knuth","steve mcconnell","v anton spraul","Andre Lamothe"};
float prix[100]={159.99,87.99,139.99,67.99,109.99};
int quantite[100]={300,254,43,203,0};
int choix;
int compteur = 5;
char find_the_title[100];
int trouvee = 0; //if trouvee = 0 na trouvee rien trouvee = 1 a trouvee
int total_de_livre;
int i;
int j;
do
{
    printf("~~~~~~~~~~~~~~~~~~ librairie Youcode ~~~~~~~~~~~~~~~~~~\n");
    printf(" _____________________________________________________\n");
    printf("|                        MENU                          |\n");
    printf("|      1 . Ajouter un livre au stock                   |\n");
    printf("|      2 . Afficher tous les livres disponibles        |\n");
    printf("|      3 . Rechercher un livre par son titre           |\n");
    printf("|      4 . Mettre a jour la quantite d'un livre        |\n");
    printf("|      5 . Supprimer un livre du stock                 |\n");
    printf("|      6 . Afficher le nombre total de livres en stock |\n");
    printf("|      0 . pour quitte le programme                    |\n");
    printf("|______________________________________________________|\n");
    printf("entrez votre choix : \n");
    scanf("%d",&choix);

        switch (choix)
        {
case 1:


    printf("titre de livre : ");
    scanf("%s",titre[compteur]);

    printf("auteur de livre : ");
    scanf("%s",auteur[compteur]);

    printf("prix de livre : ");
    scanf("%f",&prix[compteur]);

    printf("quantite de livre : ");
    scanf("%d",&quantite[compteur]);
    compteur++;
    printf("le livre est ajoutee avec succes\n");
    break;
case 2:
    for(i = 0; i < compteur;i++){
         printf("titre de livre : %s\n",titre[i]);
         printf("auteur de livre : %s\n",auteur[i]);
         printf("prix de livre : %.2f\n",prix[i]);
         printf("quantite de livre : %d\n",quantite[i]);
         printf("_________________________\n");
    }
    break;
case 3:

                trouvee = 0;
         printf("titre de livre : ");
         scanf("%s",find_the_title);
         for( i = 0; i < compteur;i++){
            if (strcmp(find_the_title,titre[i])==0)// 1 droit < gauche et -1 droit > gauche et 0 il sont egaux
            {
        printf("titre de livre : %s\n",titre[i]);

                trouvee = 1;
                break;
            }
         }
         if(trouvee == 0){
            printf("livre indisponible \n");
         }


    break;
case 4:
        trouvee = 0;
         printf("titre de livre : ");
         scanf("%s",find_the_title);
         for( i = 0; i < compteur;i++){
            if (strcmp(find_the_title,titre[i])==0)// 1 droit < gauche et -1 droit > gauche et 0 il sont egaux
            {
                int quantite2;
                printf("entrez la nouvelle quantite : ");
                scanf("%d",&quantite2);
                quantite[i] = quantite2;
                trouvee = 1;
                break;
            }
         }
         if(trouvee == 0){
            printf("livre indisponible \n");
         }
         else printf("le livre est trouvee et la modification passera avec succes\n");


    break;
case 5:
      trouvee = 0;
         printf("titre de livre : ");
         scanf("%s",find_the_title);
         for( i = 0; i < compteur;i++){
            if (strcmp(find_the_title,titre[i])==0)// 1 droit < gauche et -1 droit > gauche et 0 il sont egaux
            {
                for ( j = i; j < compteur-1; j++)
                {
                   strcpy(titre[j],titre[j+1]);
                   strcpy(auteur[j],auteur[j+1]);
                            prix[j] = prix[j+1];
                            quantite[j] = quantite[j+1];
                }


                trouvee = 1;
                compteur--;
                break;
            }
         }
         if(trouvee == 0){
            printf("livre indisponible \n");
         }
         else printf("supprime avec succes\n");


    break;
case 6:
    for ( i = 0; i < compteur; i++)
    {
        total_de_livre += quantite[i];
    }
    printf("la librairie Youcode contient %d\n",total_de_livre);

    break;

default:
    if(choix != 0){
        printf("entrer un choix validee\n");
    }
    break;
        }
        system("pause");
        system("cls");


} while (choix != 0);

    return 0;
}

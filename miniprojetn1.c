#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int choix;
int compteur = 0;
float num,sum; //addition et multiplication
float num1,num2; //soustraction
do{


    printf("|---------menu_principale---------|\n");
    printf("|      1. pour addition           |\n");
    printf("|      2. pour soustraction       | \n");
    printf("|      3. pour multiplication     |\n");
    printf("|      4. pour division           |\n");
    printf("|      5. pour moyenne            |\n");
    printf("|      6. pour valeur absolue     |\n");
    printf("|      7. pour exponentiation     |\n");
    printf("|      8. pour racine carree      |\n");
    printf("|      0. pour quitter            |\n");
    printf("|---------------------------------|\n");
    printf("entrez votre choix\n");
    scanf("%d",&choix);

    switch (choix){
case 1:
    compteur = 0;
    sum = 0;
    num = 0;
    while(1){
        if(compteur >= 2){
 char y;

            printf("veuillez vous ajoutez un autre numero? tapez (y/n):\n");
            scanf(" %c",&y);
            if( y != 'y'){
                break;
            }
        }
        printf("entrez un nomber : \n");
        scanf("%f",&num);
        sum+=num;
        compteur++;
    }
    printf("la somme de vos nombre est : %.2f\n",sum);
    break;
case 2:
    printf("entrez  un nombre : \n");
    scanf("%f",&num1);
    printf("entrez  un nombre : \n");
    scanf("%f",&num2);
    printf("la souctrection de vs nombre est : %.2f\n",(num1-num2));
    break;
case 3:
    compteur = 0;
    sum = 1;
    num = 0;
    while(1){
        if(compteur >= 2){
 char y;

            printf("veuillez vous ajoutez un autre numero? tapez (y/n):\n");
            scanf(" %c",&y);
            if( y != 'y'){
                break;
            }
        }
        printf("entrez un nomber : \n");
        scanf("%f",&num);
        sum*=num;
        compteur++;
    }
     printf("la multiplication de vos nombre est : %.2f\n",sum);
    break;
case 4:
    printf("entrez  un nombre : \n");
    scanf("%f",&num1);
    printf("entrez  un nombre : \n");
    scanf("%f",&num2);
    if(num2 == 0){
        printf("le nombre doint etre differents de zero \n");
    }
    else{
    printf("la division  de vs nombre est : %.2f\n",(num1/num2));
    }
    break;
case 5:
    compteur = 0;
    sum = 0;
    while(1){
        if(compteur >= 1){
char y;

            printf("veuillez vous ajoutez un autre numero? tapez (y/n):\n");
            scanf(" %c",&y);
            if( y != 'y'){
         break;
            }
}
    printf("entez un nomber : \n");
    scanf("%f",&num);
    sum+=num;
    compteur++;

    }
    printf("la moyenne de vos numero est %.2f\n",(sum/compteur));

    break;
case 6:
    printf("entez un nomber : \n");
    scanf("%f",&num);
    if(num < 0){
        num = num * (-1);
    }
    printf("la valeur absolue de votre nombre est : %.2f\n",num);

    break;
case 7:
    printf("entez un nomber (base): ");
    scanf("%f",&num1);
    printf("entez un nomber (exposant): ");
    scanf("%f",&num2);
    printf("l exponentiation de vos numero est: %.2f\n",pow(num1,num2));

    break;
case 8:
    printf("entez un nombre positif :");
    scanf("%f",&num);
    if(num < 0){
        printf("le nombre sera etre positif !!!\n");
    }
    else{
        printf("le racine carree de votre nombre est: %.2f\n",sqrt(num));
    }
    break;
default:
    if(choix != 0){
        printf("entrer un choix validee\n");
    }
    break;
    }
system("pause");
system("cls");
}while(choix != 0);


    return 0;
}

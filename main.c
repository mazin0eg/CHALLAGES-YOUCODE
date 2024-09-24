#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20];
    char prenome[20];

    int age;
    char sexe[20];
    char adresse_email[20];

        printf("entre votre nom: ");
        scanf("%s",&nom);


        printf("entre votre prenom: ");
        scanf("%s",&prenome);


        printf("entre votre age: ");
        scanf("%d",&age);

        printf("quelle est votre sexe: ");
        scanf("%s",&sexe);

        printf("entre votre adresse email: ");
        scanf("%s",&adresse_email);



        printf("nom: %s\n",nom);

        printf("prenome: %s\n",prenome);

        printf("age: %d\n",age);

        printf("sexe: %s\n",sexe);

        printf("adresse email: %s\n",adresse_email);



    return 0;
}


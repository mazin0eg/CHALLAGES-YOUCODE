#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur. Formule :

Moyenne géométrique = (a * b * c)^(1/3)*/
int main()
{
    float a,b,c;
    float moyenne_geometrique;


        printf("taper un nomber a: ");
        scanf("%f",&a);

        printf("taper un nomber b : ");
        scanf("%f",&b);

        printf("taper un nomber c : ");
        scanf("%f",&c);

    float x = a*b*c;
    moyenne_geometrique = pow(x,(1.0/3.0));

        printf("la moyenne geometrique = %.2f",moyenne_geometrique);
    return 0;
}

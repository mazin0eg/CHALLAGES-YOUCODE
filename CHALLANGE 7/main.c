#include <stdio.h>
#include <stdlib.h>
/* Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur
avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5*/
int main()
{
   float a,b,c;

   printf("entrer un nombre a: ");
   scanf("%f",&a);

   printf("entrer un nombre b: ");
   scanf("%f",&b);

   printf("entrer un nombre c: ");
   scanf("%f",&c);

   float m = ((a*2)+(b*3)+(c*5)) / 10;
   printf("la moyenne ponderee de trois nombres donnes est %.2lf ",m);
    return 0;
}

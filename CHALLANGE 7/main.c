#include <stdio.h>
#include <stdlib.h>
/* Moyenne pond�r�e de trois nombres
�crivez un programme en C pour calculer la moyenne pond�r�e de trois nombres donn�s par l'utilisateur
avec les pond�rations suivantes :

1er nombre : pond�ration 2
2�me nombre : pond�ration 3
3�me nombre : pond�ration 5*/
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

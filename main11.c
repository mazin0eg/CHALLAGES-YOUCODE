#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longuer,largeur;
    float formule;

    printf("entrer la langueure de rectangle: ");
    scanf("%f",&longuer);

    printf("entrer la largeur de rectangle: ");
    scanf("%f",&largeur);

    formule = longuer * largeur;

    printf("le Surface de rectangle est : %.2lf",formule);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier.
 Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.*/
int main()
{
    int a,b;
    printf("entrer un nomber a : ");
    scanf("%d",&a);

    printf("entrer un nomber b : ");
    scanf("%d",&b);

    printf(" %d + %d = %d\n %d - %d = %d\n %d * %d = %d\n %d / %d = %d\n",a,b,a+b,a,b,a-b,a,b,a*b,a,b,a/b);
    return 0;
}

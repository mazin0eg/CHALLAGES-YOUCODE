#include <stdio.h>
#include <stdlib.h>
/*Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz).
Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/
int main()
{
    float C;
        printf("taper une temperature en celsius: ");
        scanf("%f",&C);

    if(C < 0){
        printf("l eau est en etat solide");

    }
    else if(C>=0 && C < 100){
        printf("l eau est en etat liquide");
    }
    else{
        printf("l eau est en etet gazeuz");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*Challenge 5 : Affichage Temp�rature
�crivez un programme qui demande la temp�rature en Celsius et affiche l'�tat de l'eau � cette temp�rature (solide, liquide, gaz).
R�gle :

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

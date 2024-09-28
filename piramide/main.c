#include <stdio.h>
#include <math.h>

int main(){
int base,exposant,i;

    printf("entrez un nombere (base): ");
    scanf("%d",&base);

    printf("entrez un nombere (exposant): ");
    scanf("%d",&exposant);

        for(i = 0;i <= 1; i++){
            printf("le resultat est %.2lf",pow(base,exposant));
        }
return 0;
}

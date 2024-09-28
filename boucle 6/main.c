#include <stdio.h>
#include <stdlib.h>

int main()
{
int num,i,SUM;
 printf("entez un nombre n : ");
 scanf("%d",&num);

for(i = 0;i <= num;i++){
    SUM = SUM + i;

}
printf("le resultat est %d",SUM);
    return 0;
}

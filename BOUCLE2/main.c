#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,fc=1,i;

    printf("entrer un nomber entier : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fc = fc*i;
    }

    printf("factorielle de ton number est : %d",fc);

    return 0;
}

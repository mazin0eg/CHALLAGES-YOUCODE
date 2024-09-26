#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sm=0,i;

    printf("Entrer un nomber entier : ");
    scanf("%d",&num);

    for(i=1;i<num;i++){
        sm=sm+i;
    }

    printf("la somme de n number est  %d",sm);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,div,i;

    printf("entrer un nomber de 1 a 10 : ");
    scanf("%d",&num);

 for(i=1;i<=10;i++){
    div= i * num;
    printf(" %d * %d = %d",num,i,div);
}
    return 0;
}

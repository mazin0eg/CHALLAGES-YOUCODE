#include <stdio.h>
#include <stdlib.h>

int main()
{
char etoile="x";
int i,num;

printf("entrer un nomber : ");
scanf("%d",&num);

for(i = 1;i <= num;i++){
    etoile = num + i;
    printf("%c\n",etoile);
}
    return 0;
}

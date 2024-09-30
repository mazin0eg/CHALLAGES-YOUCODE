#include <stdio.h>
int max(int a,int b){
   if(a<b) return a;
   else return b;
}
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
int r=max(a,b);
    printf("\t%d est le plus petit valeur",r);
    return 0;
}

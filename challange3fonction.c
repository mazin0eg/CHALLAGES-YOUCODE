#include <stdio.h>

void sum(int a,int b){
    if(a>b) printf("%d est plus grande que %d",a,b);
    else printf("%d est plus grande que %d",b,a);
}
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
  return 0;
}

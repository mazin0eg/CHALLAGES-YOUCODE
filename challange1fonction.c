#include <stdio.h>

void sum(int a,int b){
    printf("%d et %d egale %d",a,b,a+b);
}
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
  return 0;
}

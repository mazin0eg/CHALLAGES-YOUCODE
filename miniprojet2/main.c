#include <stdio.h>

int sum(int a,int b){
    int result = a + b;
    return result;
}

int main(){
    int x,y;
    int r = sum(x,y);
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d",r);
    return 0;
}
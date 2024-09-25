#include <stdio.h>
#include <math.h>

int main() {
    float X1,X2,Y1,Y2,Z1,Z2;
    float xyz,distance;

    printf("enter  un nomber X1 : ");
    scanf("%f",&X1);

    printf("enter  un nomber X2 : ");
    scanf("%f",&X2);

    printf("enter  un nomber Y1 : ");
    scanf("%f",&Y1);

    printf("enter  un nomber Y2 : ");
    scanf("%f",&Y2);

    printf("enter  un nomber Z1 : ");
    scanf("%f",&Z1);

    printf("enter  un nomber Z2 : ");
    scanf("%f",&Z2);

    xyz = ((X2-X1),2.0) + pow((Y2-Y1),2.0) + pow((Z2-Z1),2.0);
    distance = sqrt(xyz);

    printf("%.2f",distance);


    return 0;
}

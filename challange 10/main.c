#include <stdio.h>
#include <math.h>

int main() {
    float r;
    const float pi = 3.14;
    float volume;

    printf("etrer le rayon de la sphere :");
    scanf("%f",&r);

    volume = (4.0/3.0) * pi * pow(r,3.0);
    printf("le volume d'une sphère est :%.2f ",volume);

    return 0;
}

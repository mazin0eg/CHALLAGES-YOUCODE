#include <stdio.h>
#include <stdlib.h>

/*Conversion de la vitesse
�crivez un programme qui demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s). Formule :

m/s = km/h * 0.27778*/
int main()
{
    int kmh;

        printf("taper une vitesse en kilomeres: ");
        scanf("%d",&kmh);

    double ms = kmh * 0.27778;
        printf("%.2lf * 0.27778 = %.2lf m/s ",kmh,ms);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Conversion de la distance
�crivez un programme qui demande la distance en kilom�tres et la transforme en yards. Formule :

Yards = Km * 1093.61 */

    double km;

        printf("taper une distance en kilomeres: ");
        scanf("%lf",&km);

    double yards_formul = km * 1093.61;
        printf("%.2lf * 1093.6 = %.2lf ",km,yards_formul);
    return 0;
}

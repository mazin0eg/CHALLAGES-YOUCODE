#include <stdio.h>
#include <stdlib.h>
/*�crivez un programme qui demande la temp�rature en Celsius et la transforme en Kelvin. Formule :

K = C + 273.15
*/
int main()
{
    double c;
    printf("taper la temperaure en celisius : ");
    scanf("%lf",&c);

    double Kelvin_forma = c + 273.15;

    printf("%.2lf + 273.15 = %.2lf",c,Kelvin_forma);
    return 0;
}

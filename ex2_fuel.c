/* Name:RWOTOMIA PIUSEMMANUEL*/
/* Student Number: 25/U/BIE/01419/PE */

#include <stdio.h>
int main() {
    float distanceTravelled,fuelUsed,fuelEfficiency; 
    printf("Enter distance travelled(km): ");
    scanf("%f",&distanceTravelled); 
    printf("Enter fuel used(litres) ");
    scanf("%f",&fuelUsed);
    fuelEfficiency = distanceTravelled/ fuelUsed;
    printf("......TRANSACTION SUMMARY......");
    printf("\nFuel Efficiency: %.2f km/litre\n",fuelEfficiency);
    printf("....................");

    return 0;
}

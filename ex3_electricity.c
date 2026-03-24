/* Name: RWOTOMIA PIUSEMMANUEL*/
/* Student Number: 25/U/BIE/01419/PE */

#include <stdio.h>
int main() {
    float unitsConsumed,costPerUnit,totalElectricityBill; 
    printf("Enter units Consumed: ");
    scanf("%f",&unitsConsumed); 
    printf("Enter cost per unit:");
    scanf("%f",&costPerUnit); 
    totalElectricityBill = unitsConsumed * costPerUnit;
    printf("......TRANSACTION SUMMARY......");
    printf("\nTotal electricity bill: %.2f UGX\n",totalElectricityBill);
    printf("....................");

    return 0;
}

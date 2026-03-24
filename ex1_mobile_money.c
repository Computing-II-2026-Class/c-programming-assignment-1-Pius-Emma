/* Name: RWOTOMIA PIUS EMMANUEL*/
/* Student Number: 25/U/BIE/01419/PE */

#include <stdio.h>

int main(void)
{
    float amountToSend,transactionFee,feeAmount,totalAmountDeducted;
    printf("Enter amount to send:");
    scanf("%f",&amountToSend); 
    printf("Enter transaction fee:");
    scanf("%f",&transactionFee); 
    feeAmount = (transactionFee/ 100) * amountToSend;
    totalAmountDeducted = feeAmount + amountToSend; 
    printf("......TRANSACTION SUMMARY.... .");
    printf("\nAmount sent: %.2f UGX\n",amountToSend); 
    printf("\nTransaction fee: %.2f UGX\n",feeAmount); 
    printf("\nTotal amount deducted: %.2f UGX\n",totalAmountDeducted);
    printf("...................");

    return 0;
}

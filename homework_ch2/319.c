#include<stdio.h>
#include<stdlib.h>

int main() {
    float principal,rate,days,charge;
    printf("Enter loan principal (-1 to end):");
    scanf("%f",&principal);
    while(principal != -1)
    {
        printf("Enter interest rate:");
        scanf("%f",&rate);
        printf("Enter term of the loan in day:");
        scanf("%f",&days);
        charge=principal*rate*(days/365);
        printf("The interset charge is $%.2f",charge);
        printf("\n\nEnter loan principal (-1 to end):");
        scanf("%f",&principal);
    }
    system("pause");
    return 0;
}
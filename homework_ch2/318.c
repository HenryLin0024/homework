#include<stdio.h>
#include<stdlib.h>

int main() {
    float sell=0.0,salary;
    printf("Enter sales in dollars(-1 to end):");
    scanf("%f",&sell);

    while(sell != -1)
    {
        salary=sell*0.09+200.0;
        printf("Salary is:%.2f",salary);
        printf("\n\nEnter sales in dollars(-1 to end):");
        scanf("%f",&sell);
    }


    system("pause");
    return 0;
}


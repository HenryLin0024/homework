#include<stdio.h>
#include<stdlib.h>

int main() {
    int hour;
    float hourrate,salary;
    printf("Enter # of hours worked (-1 to end):");
    scanf("%d",&hour);
    while(hour!=-1)
    {
        printf("Enter hourly rate of the worker($00.00):");
        scanf("%f",&hourrate);
        if(hour>40)
        {
            salary=(hour-40)*hourrate*1.5+40*hourrate;
        }
        else
            salary=hour*hourrate;
        
        printf("Salary is $%.2f",salary);
        printf("\n\nEnter # of hours worked (-1 to end):");
        scanf("%d",&hour);

    }

    system("pause");
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {

    int worktype;
    double salary;
    while(worktype!=0)
    {
        printf("Enter worktype of employee (1:Manager 2:hourly worker 3:commission worker 4:pieceworker //Enter 0 to exit):");
        scanf("%d", &worktype);

        switch (worktype)
        {
            case 1:
            printf("Enter manager salary:");
            scanf("%lf",&salary);
            printf("Manager salary is $%.2lf\n\n",salary);
            break;

        case 2:
            double hours, hourlyWage;
            printf("Enter wage per hour:");
            scanf("%lf",&hourlyWage);
            printf("Enter weekly worked hours:");
            scanf("%lf",&hours);
            
            if (hours <= 40) {
                salary=hours*hourlyWage;
            } 
            else {
                salary = 40 * hourlyWage + (hours - 40) * (hourlyWage * 1.5);
            }
            printf("The salary is $%.2lf\n\n",salary);
            break;

        case 3:
            double totalSales;
            printf("Enter weekly sales:");
            scanf("%lf",&totalSales);
            salary = 250 + (0.057*totalSales);
            printf("The salary is $%.2lf\n\n",salary);
            break;    

        case 4:  
            double piecesProduced, pieceRate;
            printf("Enter wage per item:");
            scanf("%lf", &pieceRate);
            printf("Enter the number of weekly produced :");
            scanf("%lf", &piecesProduced);
            salary = piecesProduced * pieceRate;
            printf("The salary is $%.2lf\n\n",salary);
            break;    
    
        default:
        
            break;
        }    
    }
    system("pause");
    return 0;
}
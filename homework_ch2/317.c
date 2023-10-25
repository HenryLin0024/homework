#include<stdio.h>
#include<stdlib.h>

int main(){
    int Account=0;
    float begin,charge,credit,limit;
    
    printf("Enter account number(-1 to end):");
    scanf("%d",&Account);
    while(Account!=-1){
        printf("Enter beginning balance:");
        scanf("%f",&begin);
        printf("Enter total charges:");
        scanf("%f",&charge);
        printf("Enter total credit:");
        scanf("%f",&credit);
        printf("Enter credit limit:");
        scanf("%f",&limit);
        if((begin+charge-credit) > limit){
            printf("Account :%d\n",Account);
            printf("Credit limit :%.2f\n",limit);
            printf("Balance :%.2f\n",(begin+charge-credit));
            puts("Credit Limit Exceed.");
        }
        printf("\nEnter account number(-1 to end):");
        scanf("%d",&Account);
    }
    system("pause");
    return 0;
}
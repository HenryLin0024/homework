#include<stdio.h>

#include<stdlib.h>


int main(void) {
    int a, b, c, d, e, t;

    printf("Total miles(kilometers) driven per day:");
    scanf("%d", &a);
    printf("Cost per gallon(liter) of gasoline:");
    scanf("%d", &b);
    printf("Average miles(kilometers) per gallon(liter):");
    scanf("%d", &c);
    printf("Parking fee per day:");
    scanf("%d", &d);
    printf("Tolls per day:");
    scanf("%d", &e);
    
    t=(a/c*b)+ d + e;
    printf("Total=$%d", t);
    
    system("pause");
    return 0;
}

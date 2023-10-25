#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {    
    int invest=5000;
    float total;
    for(float i=0.10;i<=0.125;i+=0.005)
    {
        printf("The total after 15 years(rate:%.3f): %f\n",i,invest*pow(1+i,15));
    }


    system("pause");
    return 0;
}
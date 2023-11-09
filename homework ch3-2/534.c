#include<stdio.h>
#include<stdlib.h>
int power(int base,int exp);

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));



    system("pause");
    return 0;
}

int power(int base,int exp)
{
    if(exp==0)
    	return 1;
    else
    	return base*power(base,exp-1);
}
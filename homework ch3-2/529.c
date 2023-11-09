#include<stdio.h>
#include<stdlib.h>

int lcm(int m,int n);

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",lcm(a,b));

    system("pause");
    return 0;
}

int lcm(int m,int n)
{
    int min,i;
    if(m>n)
		min=n;
	else
		min=m;
	for(i=min;i>0;i--)
	{
		if(m%i==0 && n%i==0)
			break;
	}
    return m*n/i;
}
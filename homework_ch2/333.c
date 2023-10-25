#include<stdio.h>
#include<stdlib.h>

int main() {
    int h,l;
    scanf("%d %d",&h,&l);
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=l;j++)
        {
            if(i==1 || i==h || j==1 || j==l)
                printf("*");
            else
                printf(" ");
        }
        putchar('\n');
    }
    system("pause");
    return 0;
}
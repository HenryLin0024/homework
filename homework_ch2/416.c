#include<stdio.h>
#include<stdlib.h>

int main() {
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%s","*");
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i=10;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%s","*");
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(j>=i)
                printf("%s","*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");

    for(int i=10;i>=1;i--)
    {
        for(int j=1;j<=10;j++)
        {
            if(i<=j)
                printf("%s","*");
            else
                printf(" ");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
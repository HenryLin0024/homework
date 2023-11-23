#include<stdio.h>
#include<stdlib.h>

void stringReserve(char array[]);

int main() {
    char str[100];
    scanf("%s",&str);

    stringReserve(str);

    system("pause");
    return 0;
}

void stringReserve(char array[])
{
    if(array[0]=='\0')
        return;
    
    stringReserve(array+1);
    printf("%c",array[0]);
}
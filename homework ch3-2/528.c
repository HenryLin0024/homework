#include<stdio.h>
#include<stdlib.h>

char converter(char r);

int main() {
    char input;
    
    scanf("%c",&input);
    printf("%c",converter(input));


    system("pause");
    return 0;
}

char converter(char r)
{
    if(r>91)
        return (r-32);
    else
        return (r+32);
}
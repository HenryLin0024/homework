#include<stdio.h>
#include<stdlib.h>

void cubeByRefrence(int *nPtr);

int main() {
    int number=5;
    printf("The orignal value of number is %d",number);

    cubeByRefrence(&number);
    printf("\nThe new value of number is %d\n",number);

    system("pause");
    return 0;
}

void cubeByRefrence(int *nPtr)
{
    *nPtr=*nPtr * *nPtr * *nPtr;
}
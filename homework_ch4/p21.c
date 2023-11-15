#include<stdio.h>
#include<stdlib.h>

void staticArrayInit();
void automaticArrayInit();

int main() {
    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();
    printf("\n");

    system("pause");
    return 0;
}

void staticArrayInit(){
    static int array[3]={0,0,0};

    printf("\nValue on entering staticArrayInit:\n");

    for(int i=0;i<3;i++) 
        printf("array[%d] = %d\t",i,array[i]);

    printf("\nValue on exiting staticArrayInit:\n");

    for(int i=0;i<3;i++)
        printf("array[%d] = %d\t",i,array[i]+=5);
}

void automaticArrayInit(){
    int array[3]={1,2,3};

    printf("\n\nValue on entering staticArrayInit:\n");

    for(int i=0;i<3;i++) 
        printf("array[%d] = %d\t",i,array[i]);

    printf("\nValue on exiting staticArrayInit:\n");

    for(int i=0;i<3;i++){
        printf("array[%d] = %d\t",i,array[i]+=5);
    }
}
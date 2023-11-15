#include<stdio.h>
#include<stdlib.h>

void printArray(const int a[][3]);

int main() {
    int arr1[2][3]={{1,2,3},{4,5,6}};
    int arr2[2][3]={1,2,3,4,5};
    int arr3[2][3]={{1,2},{4}};

    printf("Value in array1 by row are :\n");
    printArray(arr1);

    printf("Value in array2 by row are :\n");
    printArray(arr2);

    printf("Value in array3 by row are :\n");
    printArray(arr3);

    system("pause");
    return 0;
}

void printArray(const int a[][3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[], int low, int high, int key) {

    if(high < low) 
        return -1;

    int mid = low + (high - low) / 2;

    if(key == arr[mid])
        return mid;

    if(key > arr[mid]) 
        return binarySearch(arr, mid+1, high, key);
  
    else
        return binarySearch(arr, low, mid-1, key);
}

int main() {

    int arr[] = {2, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int index = binarySearch(arr, 0, n-1, 5);  

    if(index!=-1)
        printf("Found,The index is:%d", index);
    else
        printf("Not found");

    system("pause");
    return 0;
}
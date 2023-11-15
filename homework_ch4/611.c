#include <stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int n) {
  int i, j, tmp;
  
  for (i = 0; i < 9; i++) { 
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1]; 
        arr[j + 1] = tmp;
      }
    }
  }
}

int main() {
    int arr[] = {5, 3, 8, 6, 2, 10, 9, 1, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original sort:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); 
    }

    bubbleSort(arr, n);  

    printf("\nAfter sorting:");
    for (int i = 0; i < n; i++)
    {    
        printf("%d ", arr[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
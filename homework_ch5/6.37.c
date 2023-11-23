#include <stdio.h>
#include<stdlib.h>

int recursiveMaximum(int arr[], int n) {
  
  if (n == 1) 
    return arr[0];

  int max = recursiveMaximum(arr, n-1);

  if(max > arr[n-1]) 
    return max;
  else
    return arr[n-1];
}

int main() {

  int arr[] = {5, 4, 8, 3, 9};
  int n = sizeof(arr)/ sizeof(arr[0]);

  int max = recursiveMaximum(arr, n);

  printf("Maximum:%d", max);
  
  system("pause");  
  return 0;
}
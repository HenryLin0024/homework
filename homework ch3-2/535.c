#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(){
    unsigned int a; 
    scanf("%llu", &a);
    printf("%llu",fibonacci(a));
    
    system("pause");
    return 0;
}

unsigned long long int fibonacci(unsigned int n) {
  unsigned long long int a = 1; 
  unsigned long long int b = 1;
  unsigned long long int c;
  for (int i = 3; i < n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
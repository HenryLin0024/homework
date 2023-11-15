#include<stdio.h>
#include<stdlib.h>

void inverse(int *);

int main() {
    int a[3]={3,5,7};

	for(int i=0;i<3;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");

	inverse(a);

	for(int i=0;i<3;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");

    system("pause");
    return 0;
}

void inverse(int a[]){
	for(int i=0;i<3/2;i++){
		int tmp = a[i];
		a[i] = a[3-i-1];
		a[3-i-1] = tmp;
	}
}
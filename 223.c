#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && b > c) {
		printf("%d is the largest number in the group\n", a);
		printf("%d is the smallest number in the group", c);
	}

	else if (a > c && c > b) {
		printf("%d is the largest number in the group\n", a);
		printf("%d is the smallest number in the group", b);
	}

	else if (b > a && a > c) {
		printf("%d is the largest number in the group\n", b);
		printf("%d is the smallest number in the group", c);
	}

	else if (b > c && c > a) {
		printf("%d is the largest number in the group\n", b);
		printf("%d is the smallest number in the group", a);
	}

	else if (c > a && a > b) {
		printf("%d is the largest number in the group\n", c);
		printf("%d is the smallest number in the group", b);
	}

	else if (c > b && b > a) {
		printf("%d is the largest number in the group", c);
		printf("%d is the smallest number in the group", a);
	}



	return 0;
}
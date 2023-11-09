#include<stdio.h>
#include<stdlib.h>
void hanoi(int n,char fromPeg,char toPeg,char auxPeg);

int main() {
    int n=3;
	
	hanoi(n,'A','C','B');

    system("pause");
    return 0;
}

void hanoi(int n,char fromPeg,char toPeg,char auxPeg)
{
	if(n==1)
		printf("Move the No.1 plate from %c tower to %c tower\n",fromPeg,toPeg);
	else
	{
		hanoi(n-1,fromPeg,auxPeg,toPeg);
		printf("Move No.%d plate from %c tower to %c tower\n",n,fromPeg,toPeg);
		hanoi(n-1,auxPeg,toPeg,fromPeg); 
			
	} 
}
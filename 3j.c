/* Write a C program to find the factorial of a given number */
#include<stdio.h>
void main(void){
	int N,i;
	unsigned long long factorial=1;
	printf("Enter number: ");
	scanf("%d",&N);
	for(i=2;i<=N;i++)
		factorial*=i;
	printf("factorial of %d is %llu\n",N,factorial);
}

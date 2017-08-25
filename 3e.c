/* Write a program to calculate the sum of natural numbers */
#include<stdio.h>
void main(void){
	int N,i,sum=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
		sum+=i;
	printf("sum: %d\n",sum);
}


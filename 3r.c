/* Write a C program to generate fibonacci sequence given first number and second number of the sequence */
/* A series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers. The simplest is the series 1, 1, 2, 3, 5, 8, etc. */
#include<stdio.h>
void main(void){
	int len,previous,current,sum,i;
	printf("Enter number of terms: ");
	scanf("%d",&len);
	printf("Enter first and second number:\n");
	scanf("%d%d",&previous,&current);
	sum = previous + current;
	printf("%d %d ",previous,current);
	for(i=2;i<len;i++){
		previous = current;
		current = sum;
		printf("%d ",current);
		sum = current + previous;
	}
	printf("\n");
}

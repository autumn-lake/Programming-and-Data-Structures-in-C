/* Write a program to read input until user enter a positive integer */
#include<stdio.h>
void main(void){
	int n;
	do{
		printf("enter an integer: \n");
		scanf("%d",&n);
	} while(n<0);
	printf("n value: %d\n",n);
}

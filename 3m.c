/* Write a program to count number of digits in an integer (Version-2) */
#include<stdio.h>
void main(void){
	int N,digits=0;
	printf("Enter integer: ");
	scanf("%d",&N);
	while(N!=0){
		N/=10;
		digits+=1;	
	}
	printf("total digits are: %d\n",digits);
}

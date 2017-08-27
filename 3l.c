/* Write a program to count number of digits in an integer (Version-1) */
#include<stdio.h>
void main(void){
	int N,digits=0;
	int q,r;
	printf("Enter integer: ");
	scanf("%d",&N);
	do{
		q = N/10;
		r = N%10;
		N = q;
		digits+=1;
	} while(q>0);
	printf("total digits are: %d\n",digits);
}

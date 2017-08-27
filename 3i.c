/* Write a C program to check whether given number is prime or not */
#include<stdio.h>
void main(void){
	int N,i,flag=0;
	printf("Enter number to check: ");
	scanf("%d",&N);
	for(i=2;i<=N/2;i++){
		if(N%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1) printf("Number is not prime\n");	
	else printf("Number is prime\n");
}

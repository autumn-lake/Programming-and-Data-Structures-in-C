/* Write a C program to check whether a given number is palindrome or not */
#include<stdio.h>
#include<math.h>
void main(void){
	int N,n,remainder,reversen=0;
	printf("Enter number: ");
	scanf("%d",&n);
	N = n;
	while(n!=0){
		remainder = n%10;
		reversen = reversen*10 + remainder;
		n/=10;
	}
	(N==reversen)? printf("number is palindrome\n") : printf("not palindrome\n");
}

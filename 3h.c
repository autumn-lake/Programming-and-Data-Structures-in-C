/* Write a C program to read integers until user enters a negative number or number of integers read reaches to 15 */
#include<stdio.h>
void main(void){
	int n,i;
	for(i=0;i<15;i++){
		printf("Enter integer: ");
		scanf("%d",&n);
		if (n<0)
			break;
	}
}

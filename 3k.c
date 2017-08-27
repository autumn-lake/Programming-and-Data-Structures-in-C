/* Write a program to print half pyramid using * */
#include<stdio.h>
void main(void){
	int i,j,numrows;
	printf("Enter number of rows: ");
	scanf("%d",&numrows);
	for(i=1;i<=numrows;i++){
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
}

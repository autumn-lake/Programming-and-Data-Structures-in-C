/* Write a program to print the star pattern-3 (version-2):

    *
   ***
	*****
 *******
*********

*/
#include<stdio.h>
void main(void){
	int numrows,i,j,k;
	printf("Enter number of rows: ");
	scanf("%d",&numrows);
	for(i=1;i<=numrows;i++){
		for(k=i;k<numrows;k++)
			printf(" ");
		for(j=1;j<2*i;j++){
			printf("*");		
		}
		printf("\n");
	}
}


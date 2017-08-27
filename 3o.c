/* Write a program to print the star pattern-3 (version-1):

    *
   ***
	*****
 *******
*********

*/
#include<stdio.h>
void main(void){
	int numrows,i,j,k,maxstars,rowstars;
	printf("Enter number of rows: ");
	scanf("%d",&numrows);
	maxstars = 2*(numrows-1) + 1;
	for(i=0;i<numrows;i++){
		rowstars = 2*i+1;
		for(k=0;k<(maxstars-rowstars)/2;k++)
			printf(" ");
		for(j=0;j<2*i+1;j++){
			printf("*");		
		}
		printf("\n");
	}
}


/* Determine whether two arrays a and b have an element in common */
#include<stdio.h>

int iscommon(int a[],int b[],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i]==b[j])
				return 1;		
		}
	}
	return 0;
}

void main(void){
	int a[5] = {1,2,3,4,5};
	int b[5] = {10,6,4,9};
	int test = iscommon(a,b,5,4);
	if(test==1)
		printf("Have a common element\n");
	else
		printf("No common element\n");
}

/* Write a custom function to implement pow() function */
#include<stdio.h>
int power(int base,int n){
	int p;
	for(p=1;n>0;--n){
		p*=base;
	}
	return p;
}
void main(void){
	int a=2,b=8;
	printf("2 power 8 is: %d\n",power(a,b));
}

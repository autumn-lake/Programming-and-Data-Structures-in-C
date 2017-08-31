/* Question on pointer to pointer and array of pointers */
/* What does the following program print */

#include<stdio.h>
void main(void){
	int a[] = {10,20,30,40,50,60};
	int *p[] = {a,a+1,a+2,a+3,a+4,a+5};
	int **pp = p;
	pp++;
	
	printf("%ld,%ld,%d\n", pp-p, *pp-a, **pp);
	*pp++;
	printf("%ld,%ld,%d\n", pp-p, *pp-a, **pp);
	++*pp;
	printf("%ld,%ld,%d\n", pp-p, *pp-a, **pp);
	++**pp;
	printf("%ld,%ld,%d\n", pp-p, *pp-a, **pp);
}

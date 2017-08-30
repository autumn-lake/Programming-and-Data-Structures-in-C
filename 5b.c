/* Simple example of pointer subtraction */
#include<stdio.h>
void main(void){
	int x=5,y=3,z=15;
	int *a = &x;
	int *b = &y;
	int *c = &z;
	printf("%ld\n",c-a);
	printf("%lu\n",a);
	printf("%lu\n",b);
	printf("%lu\n",c);
	printf("%ld\n",&c-&b);
	printf("%lu\n",&a);
	printf("%lu\n",&b);
	printf("%lu\n",&c);
}

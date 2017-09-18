/* Character arrays and pointers */
#include<stdio.h>

void main(void){
	char a[] = "strnnn";	
	char *p = "strnnn";
	printf("before\n");
	printf("%s\n",a);
	printf("%s\n",p);
	*(a+1) = 'x';
	/* *(p+1) = 'y';  not allowed */
	printf("after\n");
	printf("%s\n",a);
	printf("%s\n",p);
}

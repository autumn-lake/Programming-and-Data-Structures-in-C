/* Question on character array and pointers */
/* What does the following fragment of C-program print:
A)GATE2011	B)E2011	C)2011	D)011
*/
#include<stdio.h>
void main(void){
	char c[]="GATE2011";
	char *p=c;
	printf("%s\n",p+p[3]-p[1]);
}

/* Copy input to output */
#include<stdio.h>
void main(void){
	int c;
	while ((c=getchar()) != EOF){
		putchar(c);
	}
}
/* Strcpy implementation using pointers - Dennis ritchie book 
Read this link for best explanation: https://medium.com/@larissafeng/understanding-while-s-t-abb2cc518f96 */

#include<stdio.h>

/* Strcpy: copy t to s */
void Strcpy(char *t,char *s){
	while(*s++ = *t++);
}	

void main(void){
	char a[]="ravindra";
	char b[9];
	printf("%s\n",b);
	Strcpy(a,b);
	printf("%s\n",b);
}

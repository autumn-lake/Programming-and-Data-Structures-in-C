/* gets() and puts() */

#include<stdio.h>

int main(){
	char str[128];
	printf("Enter a string\n");
	gets(str);
	puts(str);
	return 0;
}

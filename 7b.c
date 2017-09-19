/* Write a C program using strcat() */

#include<stdio.h>

void Strcat(char *t, char *s){	
	while(*t++);
	t--;
	while(*t++=*s++);
}

int main(){
	char target[] = "stack ";
	char source[] = "overflow";
	printf("%s\n", target);
	Strcat(target,source);
	printf("%s\n", target);
	return 0;
}

/* Write a C program using strcpy() */

#include<stdio.h>

char * Strcpy1(char *t, char *s){
	int i=0;	
	while(*(t+i)=*(s+i))
		i++;
	return t;
}

void Strcpy2(char *t,char *s){
	while(*s++ = *t++);
}

void Strcpy3(char *t,char *s){
	while(*s = *t){
		s++;
		t++;
	}
}

void main(void){
	char target[] = "ravin";
	char source[] = "hey";
	char *p = Strcpy1(target,source);
	printf("%s\n", p+2);
}

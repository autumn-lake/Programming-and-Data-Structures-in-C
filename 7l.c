/* Write a C program to remove all occurences of a character c from the string */

#include<stdio.h>

void Strcpy(char *t,char *s){
	while(*s++ = *t++);
}

void rm1(char c, char *s){
	char new[128];
	int i,j;
	for(i=0,j=0; s[i]!='\0'; i++){
		if(s[i]==c){continue;}
		new[j] = s[i];
		j++;
	}
	new[j] = '\0';
	Strcpy(new,s);
}

void rm2(char c, char *s){
	int i,j;
	for(i=0,j=0; s[i]!='\0'; i++){
		if(s[i]!=c) { s[j++] = s[i]; }	
	}
	s[j]='\0';
}

int main(){
	char c = 'b';
	char s[] = "babdaebache";
	printf("%s\n",s);
	rm2(c,s);
	printf("%s\n",s);
}

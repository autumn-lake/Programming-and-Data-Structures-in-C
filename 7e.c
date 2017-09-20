/* Write a C program to reverse string using strlen()
   In C library it is already implemented as strrev()
*/

#include<stdio.h>

int Strlen(char *s){
	int len;
	for(len=0; *s!='\0'; s++,len++);
	return len;
}

void Reverse1(char s[]){
	int len = Strlen(s);
	int tmp=0;
	for(int i=0; i<len/2; i++){
		tmp =  s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = tmp;
	}
}

void Reverse2(char s[]){
	int i,j,tmp;
	for(i=0,j=Strlen(s)-1; i<j; i++,j--){
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

int main(void){
	char s[] = "ravindra";
	printf("%d\n",Strlen(s));
	printf("%s\n",s);
	Reverse2(s);
	printf("%s\n",s);
	Reverse1(s);
	printf("%s\n",s);
}

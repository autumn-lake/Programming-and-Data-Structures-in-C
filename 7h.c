/* Convert string S to integer N */

#include<stdio.h>

int Strlen(char s[]){
	int i;
	for(i=0; *(s+i)!='\0'; i++);
	return i;
}

int stoi(char s[]){
	int N,sign=1;
	if(*s++ == '-') sign=-1;
	while(*s != '\0'){
		len = Strlen(s);
		N = *s-'0';
		for(int i=len-1; i>0; i--,N*=10);
		
	}
}

int main(void){
	char s[] = "-2741";
	printf("%s\n",s);
	return 0;
}

/* Convert int N to characters in string S */

#include<stdio.h>

int Strlen(char *s){
	int len;
	for(len=0; *s!='\0'; s++,len++);
	return len;
}

void Reverse(char s[]){
	int i,j,tmp;
	for(i=0,j=Strlen(s)-1; i<j; i++,j--){
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

void itoa(int n, char s[]){
	int i=0,sign;
	if((sign=n)<0) n=-n;
	do{
		s[i++] = n%10 + '0';
	}while((n/=10)>0);
	if(sign<0) s[i++]='-';
	s[i]='\0';
	Reverse(s);
}

int main(void){
	int n=-1245;
	char s[128];
	itoa(n,s);
	printf("%s\n",s);
	Reverse(s);
	printf("%s\n",s);
	return 0;
}



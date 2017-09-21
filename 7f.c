/* Convert int N to characters in string S (Version-1) */

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

void itos(int n, char *s){
	int j=0,sign;
	if((sign=n)<0) {n=-n;}
	if(n==0) {s[j++] = 0 + '0';}
	else{	 
		for(j=0; n>0; j++,n/=10) {s[j] = n%10 + '0';}
	}
	if(sign<0) {s[j++] = '-';}
	s[j] = '\0';
}

int main(void){
	int n=-00;
	char s[128];

	itos(n,s);
	printf("%s\n",s);
	Reverse(s);
	printf("%s\n",s);

	return 0;
}

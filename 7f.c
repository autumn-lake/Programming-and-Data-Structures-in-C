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

void itoa(int n, char *s, int sign, int len){
	int j;
	for(j=0; j<len; j++){
		s[j] = n%10 +'0';
		n = n/10;
	}
	if(sign==-1) s[j++] = '-';
	s[j] = '\0';
}

int main(void){
	int n=-1245,sign=1,len;
	char s[128];

	if(n<0){
		n = -n;
		sign = -1;
	}

	int N = n;
	for(len=0; n>0; n/=10,len++);
	if(len==0) len++;

	n = N;
	itoa(n,s,sign,len);
	printf("%s\n",s);
	Reverse(s);
	printf("%s\n",s);

	return 0;
}

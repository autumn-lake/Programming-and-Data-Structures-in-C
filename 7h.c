/* Convert string S to integer N */

#include<stdio.h>

int stoi(char p[]){
	int i, N=0, sign=1;	
	if(*p == '-') {sign=-1; p++;}
	for(i=0; *(p+i)!='\0'; i++) {N = N*10 + *(p+i)-'0';}
	if(sign==-1) N *= -1;
	return N;
}

int main(void){
	char s[] = "-72727";
	printf("%s\n",s);
	printf("%d\n",stoi(s));
	return 0;
}

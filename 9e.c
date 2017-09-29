/* Write a C program to count inputlines */

#include<stdio.h>

int main(){
	char ch;
	int count=0;
	while((ch=getchar())!=EOF){
		if(ch=='\n') ++count;
	}
	printf("Number of inputlines: %d\n",count);
	return 0;
}

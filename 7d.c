/* Write a C program to count characters */

#include<stdio.h>

int main(void){
	int nc;
	for(nc=0; getchar()!=EOF ; ++nc);
	printf("%d\n",nc);
	return 0;
}

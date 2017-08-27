/* Functions introduction */
#include<stdio.h>
int max(int x,int y){
	return (x>y)? x:y;
}
void main(void){
	int a=201,b=200;
	int maximum = max(a,b);
	printf("Maximum is %d\n",maximum);
}

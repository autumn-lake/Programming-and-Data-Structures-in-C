/* check whether a given number is even or odd */
#include<stdio.h>
int main(){
	int num;
	printf("enter a num: ");
	scanf("%d",&num);
	if (num%2==0)
		printf("num is even\n");
	else
		printf("num is odd\n");
	return 0;
}

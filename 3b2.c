/* Find the largest among three numbers assuming all are integer and unequal using nested if's */
#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("enter three numbers:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if (n1>n2){
		if (n1>n3)
			printf("%d is largest\n",n1);
		else
			printf("%d is largest\n",n3);}
	else{
		if (n2>n3)
			printf("%d is largest\n",n2);
		else
			printf("%d is largest\n",n3);}
	return 0;
}

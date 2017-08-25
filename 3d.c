/* C program to make Simple Calculator */
#include<stdio.h>
void main(void){
	double a,b;
	char operator;
	printf("Which operation you want to perform (+,-,*,/,%%)?\n");
	/* Other option to escape % in printf */	
	/* printf("Which operation you want to perform (+,-,*,/,%s)?\n","%") */
	scanf("%c",&operator);
	printf("Enter two operands:\n");
	scanf("%lf%lf",&a,&b);
	switch(operator){
		case '+': printf("addition of %0.2lf & %0.2lf is: %0.4lf\n",a,b,a+b); break;
		case '-': printf("subtraction of %0.2lf & %0.2lf is: %0.4lf\n",a,b,a-b); break;
		case '*': printf("multiplication of %0.2lf & %0.2lf is: %0.4lf\n",a,b,a*b); break;
		case '/': printf("division of %0.2lf & %0.2lf is: %0.4lf\n",a,b,a/b); break;
		case '%': printf("mod remainder of %0.2lf & %0.2lf is: %d\n",a,b,(int)a%(int)b); break;
		default: printf("Please enter valid operator\n");
	}
}

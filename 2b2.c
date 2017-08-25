/* Write a program to print Fahrenheit-Celsius Table for fahr=0,20,......,300; floating-point version */
#include<stdio.h>
void main(void){
	float fahr, celcius;
	int lower, upper, step;
	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	while (fahr <= upper){
		celcius = 5.0*(fahr-32.0)/9.0;
		printf("%3.0f\t%6.2f\n",fahr,celcius);
		fahr+=step;
	}
}

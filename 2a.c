/* Print sizes of different data types(Machine dependent) */
#include<stdio.h>
#include<limits.h>
void main(void){
	printf("size of int: %lu\n",sizeof(int));
	printf("size of char: %lu\n",sizeof(char));
	printf("size of float: %lu\n",sizeof(float));
	printf("size of double: %lu\n",sizeof(double));
	printf("size of short int: %lu\n",sizeof(short int));
	printf("size of long int: %lu\n",sizeof(long int));
	printf("size of short: %lu\n",sizeof(short));
	printf("size of long: %lu\n",sizeof(long));
	printf("size of signed: %lu\n",sizeof(signed));
	printf("size of unsigned: %lu\n",sizeof(unsigned));
	printf("size of long double: %lu\n",sizeof(long double));
	printf("size of signed int: %lu\n",sizeof(signed int));
	printf("size of unsigned int: %lu\n",sizeof(unsigned int));
	printf("size of signed char: %lu\n",sizeof(signed char));
	printf("size of unsigned char: %lu\n",sizeof(unsigned char));
	printf("size of string constant a: %lu\n",sizeof("a"));
	printf("size of single quote a: %lu\n",sizeof('a'));
}

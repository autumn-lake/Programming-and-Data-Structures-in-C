/* Write a output for the following program-3 
	Trying to access space which has been deallocated
*/

#include<stdio.h>

char *getString(){
	char str[]="print it";
	return str;
}

void main(){
	printf("%s", getString());
}

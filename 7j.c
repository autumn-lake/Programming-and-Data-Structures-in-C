/* Write a output for the following program-2
   Preprocessor will replace scanf name with "%s ravindra" string constant
*/

#include<stdio.h>
#define scanf "%s ravindra"

void main(){
	printf(scanf,scanf);
}

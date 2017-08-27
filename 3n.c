/* Write a program to check whether given program is armstrong or not.
- An Armstrong number of n digits is an integer such that the sum of n-power of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371. */

/* To compile: 
You need to link with the math library:

gcc 3n.c -lm
The error you are seeing: error: ld returned 1 exit status is from the linker ld (part of gcc that combines the object files) because it is unable to find where the function pow is defined.

Including math.h brings in the declaration of the various functions and not their definition. The def is present in the math library libm.a. You need to link your program with this library so that the calls to functions like pow() are resolved.
*/

#include<stdio.h>
#include<math.h>
void main(void){
	int N,n,sum=0,digits=0;
	int q,r; /* quotient and remainder */
	printf("Enter number to check: ");
	scanf("%d",&n);
	N = n; /* copy n to original N */
	while(n!=0){
		n/=10;
		digits++;
	}
	n = N;
	while(n!=0){
		r = n%10;
		n = n/10;
		sum += pow(r,digits);
	}
	if(sum==N) printf("Armstrong number\n");
	else printf("Not Armstrong number\n");
}


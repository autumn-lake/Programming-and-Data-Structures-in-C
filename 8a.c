/* Count number of set bit in X */

#include<stdio.h>

int bitCount(unsigned X){
	int b;
	for(b=0; X!=0; X>>=1){
		if(X & 1){
			b++;		
		}
	}
	return b;
}

int main(void){
	unsigned int i=32767;
	int numbits = bitCount(i);
	printf("num of set bits in %u is %d\n",i,numbits);
	return 0;
}

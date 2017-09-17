/* Array of pointers and Multidimentional arrays (Effect of Row Major Ordering can be seen) */
#include<stdio.h>

void main(void){
	char *name[] = {"ravi","shobhit","nitin"};
	printf("%lu\n",&name);
	printf("%lu\n",&name[0]);
	printf("%lu\n",&(*name));
	printf("%lu\n",sizeof(char * (*)[]));
	printf("%lu\n",&name[1]);
	printf("%lu\n",&name[2]);
	printf("%lu\n",*name);
	printf("%lu\n",*(name+1));
	printf("%lu\n",*(name+2));
	printf("%s\n",*(name+1)+4);
	char arr[3][13] = {"ravi","ravindra","ravindrababu"};
	printf("%s\n",*arr+14);
	printf("It prints ravindra after 14 places so it follows Row major ordering\n");
}

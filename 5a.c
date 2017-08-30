/* An example program on pointers */
#include<stdio.h>
void main(void){
	int x=5;
	int *y = &x;
	int **z = &y;
	printf("%d\n",x);
	printf("%p\n",&x);  /* use %p for pointer address stored in pointer */
	printf("%p\n",y);
	printf("%lu\n",y);
	printf("%d\n",*y);
	printf("%p\n",&y);
	printf("%lu\n",&y);
	printf("%p\n",&z);
	printf("%lu\n",&z);
	printf("%d\n",**z);
	printf("size of pointer: %lu\n",sizeof(int *));
	printf("size of pointer to pointer: %lu\n",sizeof(int **));
}

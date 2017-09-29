/* Write a C program to read stream of characters (also using dynamic memory allocation) */

#include<stdio.h>
#include<stdlib.h>
#define DEFAULT_SIZE 10

char *resize(char *p, int cap);

int main(){
	int count=0,capacity = DEFAULT_SIZE;
	char *input;
	char ch;

	input = (char *)malloc(sizeof(char)*DEFAULT_SIZE);
	if(input==NULL) printf("No memory space\n");

	for(count=0; (ch=getchar())!=EOF; count++){
		if(count==capacity){ 
			input = resize(input,capacity);
			capacity += DEFAULT_SIZE;			
		}
	input[count] = ch;
	}
	printf("%s\n",input);
	printf("%d\n",count);
	return 0;
}

char *resize(char *p, int cap){
	return realloc(p,sizeof(char)*(cap+DEFAULT_SIZE));
}

/* Switch statement */
#include<stdio.h>
void main(void){
	int weekday;
	printf("enter a weekday number: \n");
	scanf("%d",&weekday);
	switch (weekday){
		case 0: printf("monday"); break;
		case 1: printf("tuesday"); break;
		case 2: printf("wednesday"); break;
		case 3: printf("thursday"); break;
		case 4: printf("friday"); break;
		case 5: printf("saturday"); break;
		case 6: printf("sunday"); break;
		default: printf("enter valid input");
	}
}

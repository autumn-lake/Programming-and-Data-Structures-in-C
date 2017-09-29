/* Write a C program by using fscanf(),fprintf() */

#include<stdio.h>

struct emp{
	char name[20];
	int age;
};

int main(){
	FILE *fa,*fr;
	struct emp e;
	fa = fopen("emp.txt","a");
	fr = fopen("emp.txt","r");
	printf("Enter name and age: ");
	scanf("%s %d",e.name,&e.age);
	fprintf(fa,"%s %d\n",e.name,e.age);
	fclose(fa);
	do{
		fscanf(fr,"%s %d",e.name,&e.age);
		printf("%s %d\n",e.name,e.age);
	}while(!feof(fr));
	fclose(fr);
	return 0;
}

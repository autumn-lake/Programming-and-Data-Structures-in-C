/* Finding file size using fseek() and ftell() */

#include<stdio.h>

int main(){
	FILE *fp;
	int len;
	fp = fopen("7a.c","r");
	if(fp==NULL){ printf("Error opening file\n"); }
	fseek(fp,0,SEEK_END);
	len = ftell(fp);
	fclose(fp);
	printf("Total size of file.txt = %d bytes\n", len);
	return 0;
}

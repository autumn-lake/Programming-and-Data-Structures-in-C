/* putchar(),getchar(),putc(),getc() and using stdin/stdout file pointers directly */

#include<stdio.h>

int main(){
	FILE *fp;
	char ch;
	fp = fopen("test.txt","w");
	printf("Enter data:\n");
	while((ch=getchar())!=EOF) /* ch=getc(stdin) */
		putc(ch,fp); /* putc(ch,stdout) */
	fclose(fp);
	fp = fopen("test.txt","r");
	while((ch=getc(fp))!=EOF)
		printf("%c",ch); /* putc(ch,stdout) */
	return 0;
}

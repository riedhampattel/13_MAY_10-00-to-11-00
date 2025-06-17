#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("demo.txt","a");
	fprintf(fp,"\nHello this is my second file");
	fclose(fp);
	return 0;
}

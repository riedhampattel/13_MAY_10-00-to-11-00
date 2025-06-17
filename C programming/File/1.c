#include<stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("first.txt","w");
	fprintf(fp,"Hello this is my second file");
	fclose(fp);
	return 0;
}

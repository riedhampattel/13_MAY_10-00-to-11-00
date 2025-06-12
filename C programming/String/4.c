#include<stdio.h>
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	fgets(str,sizeof(str),stdin);
	printf("\nValue of string = %s",str);
	return 0;
}

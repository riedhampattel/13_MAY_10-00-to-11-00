#include<stdio.h>

int length(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		
	}
	return i;
}

int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal string = %s",str);
	int result = length(str);
	printf("\nLength of the string = %d",result);
	return 0;
}

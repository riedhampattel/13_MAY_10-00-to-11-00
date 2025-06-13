#include<stdio.h>

void reverse(char str[])
{
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("\nReversed string = ");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal string = %s",str);
	reverse(str);
	return 0;
}

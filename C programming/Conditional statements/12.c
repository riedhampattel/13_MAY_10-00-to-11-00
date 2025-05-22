#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the alphabet in ch = ");
	scanf(" %c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n%c is in uppercase",ch);
	}
	else
	{
		printf("\n%c is in lowercase",ch);
	}
	return 0;
}

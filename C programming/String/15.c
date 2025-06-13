#include<stdio.h>

void upper(char str1[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>=97 && str1[i]<=122)
		{
			str1[i] = str1[i] - 32;
		}
	}
	printf("\nString in upper case = %s",str1);
}

void lower(char str1[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]>=65 && str1[i]<=90)
		{
			str1[i] = str1[i] + 32;
		}
	}
	printf("\nString in lower case = %s",str1);
}

int main()
{
	char str1[100],str2[100];
	printf("\nEnter the str1 = ");
	gets(str1);	
	printf("\nEnter the str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	upper(str1);
	lower(str2);
	return 0;
}

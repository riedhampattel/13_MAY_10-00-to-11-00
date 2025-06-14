#include<stdio.h>

void concate(char str1[],char str2[])
{
	int i,len=0;
	for(i=0;str1[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str1[len] = str2[i];
		len++;
	}
	str1[len]='\0';
	printf("\nConcated string = %s",str1);
}

int main()
{
	char str1[100],str2[100];
	printf("\nEnter the string = ");
	gets(str1);	
	printf("\nEnter the string = ");
	gets(str2);
	printf("\nValue of string1 = %s",str1);
	printf("\nValue of string2 = %s",str2);
	concate(str1,str2);
	return 0;
}

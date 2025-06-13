#include<stdio.h>

void copy(char str1[],char str2[])
{
	int i;
	for(i=0;str2[i]!='\0';i++)
	{
		str1[i] = str2[i];
	}
	printf("\nValue of str1 = %s",str1);
	printf("\nValue of str2 = %s",str2);
}

int main()
{
	char str1[100],str2[100];
	printf("\nEnter the string = ");
	gets(str1);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	copy(str2,str1);
	return 0;
}

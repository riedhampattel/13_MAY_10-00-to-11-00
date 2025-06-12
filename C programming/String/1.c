#include<stdio.h>
int main()
{
	char str[100] = "Hello";
	int i;	
	printf("%s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}

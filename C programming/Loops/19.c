/*
A
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
int main()
{
	int row,k=65,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",k++);	
		}	
		printf("\n");
	}	
	return 0;
}

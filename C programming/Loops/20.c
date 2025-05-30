/*
A
B C
C D E
D E F G
E F G H I
*/
#include<stdio.h>
int main()
{
	int row,i,j,k=65;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		char ch = k;
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch++);
		}
		k++;
		printf("\n");
	}
	return 0;
}

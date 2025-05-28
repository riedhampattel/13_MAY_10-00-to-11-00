/*
1
2 3
4 5 6
7 8 9 10
*/
#include<stdio.h>
int main()
{
	int row,i,j,k=1;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d ",k++);
		}
		printf("\n");
	}
	return 0;
}

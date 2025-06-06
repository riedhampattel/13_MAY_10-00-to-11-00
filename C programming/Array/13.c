#include<stdio.h>
int main()
{
	int row,col,i,j;
	int a[10][10];
	printf("\nEnter the row number = ");
	scanf("%d",&row);	
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

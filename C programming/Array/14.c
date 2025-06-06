#include<stdio.h>
int main()
{
	int row,col,i,j;
	int a[10][10],b[10][10],ans[10][10];
	printf("\nEnter the row number = ");
	scanf("%d",&row);	
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	printf("\nEnter the elements in array a");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements in array b");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	char choice;
	up:
	printf("\nPress '+' for addition");
	printf("\nPress '-' for subtraction");
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	switch(choice)
	{
		case '+':
				for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						ans[i][j] = a[i][j] + b[i][j];
					}
				}
		break;
		case '-':
			for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						ans[i][j] = a[i][j] - b[i][j];
					}
				}
		break;
	}
	printf("\nArray a := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nArray ans := \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	printf("\nPress 'Y' to continue and 'N' to exit = ");
	scanf(" %c",&choice);
	if(choice=='y' || choice=='Y')
	{
		goto up;
	}
	return 0;
}

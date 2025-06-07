#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],ans[10][10];
	int size,i,j,k;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	printf("\n\nEnter the elements in array a");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\nEnter the elements in array b");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<size;i++)//row
	{
		for(j=0;j<size;j++)//col
		{
			ans[i][j] = 0;
			for(k=0;k<size;k++)//col
			{
				ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
			}	
		}	
	}
	printf("\nArray a := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",a[i][j]);	
		}	
		printf("\n");
	}
	printf("\nArray b := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",b[i][j]);	
		}	
		printf("\n");
	}	
	printf("\nArray ans := \n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",ans[i][j]);	
		}	
		printf("\n");
	}		
	return 0;
}

#include<stdio.h>
int main()
{
	int a[100],size,i,j;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nOriginal Array = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}	
		}
	}
	printf("\nSorted Array = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nMaximum element of an array = %d",a[size-1]);
	printf("\nMinimum element of an array = %d",a[0]);
	return 0;
}

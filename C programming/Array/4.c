#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

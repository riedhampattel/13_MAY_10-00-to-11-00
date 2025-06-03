#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);//10
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element of an array = ");
		scanf("%d",&a[i]);
	}
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int size,a[100],sum=0,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		sum = sum + a[i];
	}
	printf("\nThe addition is = %d",sum);
	return 0;
}

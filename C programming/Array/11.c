#include<stdio.h>
int main()
{
	int a[100],size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int max = a[0];
	int min = a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	printf("\nMaximum value = %d",max);
	printf("\nMinumum value = %d",min);
	return 0;
}

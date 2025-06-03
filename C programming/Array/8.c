#include<stdio.h>
int main()
{
	int a[100],size,i,index;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the index number = ");
	scanf("%d",&index);//2
	if(index>=0 && index<size)
	{
		printf("\nElement present on index %d = %d",index,a[index]);
	}
	else
	{
		printf("\nInvalid index number");
	}
	return 0;
}

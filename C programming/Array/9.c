#include<stdio.h>
int main()
{
	int a[100],size,i,element,index;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element you want to search = ");
	scanf("%d",&element);
	int flag=0;
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			flag=1;
			index=i;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n%d is present on index %d",element,index);
	}
	else
	{
		printf("\nElement is not present in an array");
	}
	return 0;
}

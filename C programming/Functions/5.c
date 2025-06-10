#include<stdio.h>

void scan(int a[],int size);
void print(int a[],int size);

int main()
{
	int a[100],size;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	scan(a,size);
	printf("\nElements of an array = ");
	print(a,size);
	return 0;
}

void scan(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nEnter the elements in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void print(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}

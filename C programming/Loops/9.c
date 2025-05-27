#include<stdio.h>
int main()
{
	int term,n1=0,n2=1,n3,i;
	printf("\nEnter the terms = ");
	scanf("%d",&term);//5
	printf("\nFibonnaci series = %d %d ",n1,n2);
	for(i=1;i<=term-2;i++)
	{
		n3 = n1 + n2;
		printf("%d ",n3);
		n1 = n2;
		n2 = n3;
	}
	return 0;
}

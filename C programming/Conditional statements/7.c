#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);//12
	printf("\nEnter the value in n2 = ");
	scanf("%d",&n2);//12
	if(n1>n2)
	{
		printf("\n%d is the biggest number",n1);
	}
	else if(n1==n2)
	{
		printf("\nBoth values are equal");
	}
	else
	{
		printf("\n%d is the biggest number",n2);
	}
	return 0;
}

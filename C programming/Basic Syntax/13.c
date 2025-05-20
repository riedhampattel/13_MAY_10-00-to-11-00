#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter the value in a = ");
	scanf("%d",&a);
	printf("\nEnter the value in b = ");
	scanf("%d",&b);
	
	c = a>b ? a:b;
	printf("\nValue of c = %d",c);
	return 0;
}

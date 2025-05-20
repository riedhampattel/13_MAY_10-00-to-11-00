#include<stdio.h>
int main()
{
	int n1=10,n2=30,n3=40;
	printf("\nResult of n1<n2 && n1<n3 = %d",n1<n2 && n1>n3);
	printf("\nResult of n1<n2 || n1<n3 = %d",n1<n2 || n1>n3);
	printf("\nResult of !n1<n2 = %d",!n1<n2);
	return 0;
}

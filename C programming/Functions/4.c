#include<stdio.h>
//without return type without argument

void multi();//declaration

int main()
{
	multi();
	return 0;
}

void multi()
{
	int n1,n2;
	printf("\nEnter the value in n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value in n2 = ");
	scanf("%d",&n2);
	int ans = n1*n2;
	printf("\nThe multiplication is = %d",ans);
}

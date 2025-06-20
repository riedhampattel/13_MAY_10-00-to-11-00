#include<stdio.h>
int main()
{
	int a=10234;
	int num,rem;
	num=a;
	while(a!=0)
	{
		rem=a%10;
		
		printf("%d",rem);
		a=a/10;
	}
}

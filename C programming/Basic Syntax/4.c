#include<stdio.h>
#define c 10
int main()
{
	int a=10;
	const int b=10;
	a=20;
	a=50;
	//c=20;
	//b=20;
	printf("\nValue of a = %d",a);
	printf("\nValue of a = %d",b);
	printf("\nValue of c = %d",c);
	return 0;
}

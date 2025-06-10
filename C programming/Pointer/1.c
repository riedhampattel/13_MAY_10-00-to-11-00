#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *ptr = &a;//555
	
	printf("\nValue of a = %d",a);
	printf("\nValue of a = %d",*ptr);
	printf("\nAddress of a = %p",ptr);
	printf("\nAddress of a = %p",&a);
	
	printf("\nValue of b = %d",b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5,6,7,8,9};
	int *ptr=&a;
	printf("\nAddress of an array = %p",ptr);
	printf("\nAddress of a[0] = %p",&a[0]);
	printf("\nAddress of a[1] = %p",&a[1]);
	printf("\nAddress of a[2] = %p",&a[2]);
	printf("\nAddress of a[3] = %p",&a[3]);
	printf("\nAddress of a[4] = %p",&a[4]);
	printf("\nAddress of a[5] = %p",&a[5]);
	printf("\nAddress of a[6] = %p",&a[6]);
	printf("\nAddress of a[7] = %p",&a[7]);
	printf("\nAddress of a[8] = %p",&a[8]);
	return 0;
}

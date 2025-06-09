#include<stdio.h>
//without return type with argument

void sub(int n1,int n2);//declaration

int main()
{
	int num1,num2;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);
	sub(num1,num2);
	return 0;
}

void sub(int n1,int n2)
{
	int ans;
	ans = n1-n2;
	printf("\nThe subtraction is = %d",ans);
}

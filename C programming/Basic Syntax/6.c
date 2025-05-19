//typecasting
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter the value in num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value in num2 = ");
	scanf("%d",&num2);
	float ans = (float)num1/(float)num2;
	printf("\nThe division is = %.2f",ans);
	return 0;
}

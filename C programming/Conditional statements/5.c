#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year = ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("\n%d is a leap year",year);
	}
	else
	{
		printf("\n%d is not a leap year",year);
	}
	return 0;
}

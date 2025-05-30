#include<stdio.h>
int main()
{
	int num=100,flag=1,i,count=0;
	for(i=2;i<=num/2;i++)
	{
		count++;
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	printf("\nCount = %d",count);
	if(flag==1)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}

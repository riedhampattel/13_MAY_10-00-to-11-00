/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int row,i,j,p,q;
	printf("\nEnter the row number = ");
	scanf("%d",&row);//3
	for(i=1;i<=row;i++)
	{
		if(i%2==0)
		{
			p = 0;
			q = 1;
		}
		else
		{
			p = 1;
			q = 0;
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d ",q);
			}
			else
			{
				printf("%d ",p);
			}
		}
		printf("\n");
	}
	return 0;
}

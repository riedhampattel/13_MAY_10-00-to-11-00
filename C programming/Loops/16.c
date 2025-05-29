/*
1
1 0
1 0 1 
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int row,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);	
		}	
		printf("\n");
	}	
	return 0;
}

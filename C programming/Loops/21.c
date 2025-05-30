/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int row,i,k,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);//5
	int spc = (row-1) * 2;
	for(i=1;i<=row;i++)
	{
		for(k=1;k<=spc;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		spc = spc-2;
	}
	return 0;
}

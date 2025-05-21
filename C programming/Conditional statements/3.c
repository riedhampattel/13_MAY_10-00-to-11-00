#include<stdio.h>
int main()
{
	int num;
	up :
	printf("\nEnter the number = ");
	scanf("%d",&num);//-1
	printf("\nValue of num = %d",num);
	switch(num)
	{
		case -1:
			goto down;
		break;
	}
	goto up;
	down:
	return 0;
}

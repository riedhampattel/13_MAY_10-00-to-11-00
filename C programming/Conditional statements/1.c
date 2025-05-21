#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("\nToday is Monday");
		break;
		case 2:
			printf("\nToday is Tuesday");
		break;
		case 3:
			printf("\nToday is Wednesday");
		break;
		case 4:
			printf("\nToday is Thursday");
		break;
		case 5:
			printf("\nToday is Friday");
		break;
		case 6:
			printf("\nToday is saturday");
		break;
		case 7:
			printf("\nToday is sunday");
		break;
		default :
			printf("\nInvalid day number");
	}
	return 0;
}

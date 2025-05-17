#include<stdio.h>
int main()
{
	int roll,std;
	float percentage;
	char grade;
	long int fees;
	
	printf("Enter your roll no. = ");
	scanf("%d",&roll);
	printf("\nEnter your standard = ");
	scanf("%d",&std);
	printf("\nEnter your percentage = ");
	scanf("%f",&percentage);
	printf("\nEnter your grade = ");
	scanf(" %c",&grade);
//	printf("\nEnter your fees = ");
//	scanf("%lf",&fees);
	
	printf("\n\nRoll no. = %d",roll);
	printf("\nStd. = %d",std);
	printf("\nPercentage = %.3f",percentage);
	printf("\nGrade = %c",grade);
//	printf("\nTotal fees = %ld",fees);
	return 0;
}

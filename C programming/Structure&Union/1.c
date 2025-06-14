#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	struct Student s,s1;
	s.roll = 101;
	s.percentage = 98.65;
	s.grade = 'A';
	
	printf("\nRoll no. = %d",s.roll);
	printf("\nPercentage = %.2f",s.percentage);
	printf("\nGrade = %c",s.grade);
	
	printf("\nEnter the roll no. = ");
	scanf("%d",&s1.roll);
	printf("\nEnter the percentage = ");
	scanf("%f",&s1.percentage);
	printf("\nEnter the grade = ");
	scanf(" %c",&s1.grade);
	
	printf("\nRoll no. = %d",s1.roll);
	printf("\nPercentage = %.2f",s1.percentage);
	printf("\nGrade = %c",s1.grade);
	return 0;
}

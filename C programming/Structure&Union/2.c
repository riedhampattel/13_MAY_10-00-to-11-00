#include<stdio.h>
struct Student
{
	int roll;
	char name[50];
	char grade;
};
int main()
{
	struct Student s[50];
	int size,i;
	printf("\nEnter the number of students = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the roll no. = ");
		scanf("%d",&s[i].roll);
		printf("\nEnter the name = ");
		scanf("%s",&s[i].name);
		printf("\nEnter the grade = ");
		scanf(" %c",&s[i].grade);
	}
	for(i=0;i<size;i++)
	{
		printf("\nRoll no. = %d",s[i].roll);
		printf("\nName = %s",s[i].name);
		printf("\nGrade = %c",s[i].grade);
	}
	return 0;
}

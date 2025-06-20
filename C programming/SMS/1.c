#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[25];
    float percentage;
    char grade;
}s[100];
int st=0;

int main()
{
    int choice;
    up:
    printf("\n1.Add Stuents");
    printf("\n2.Display all students");
    printf("\n3.Display perticular student");
    printf("\n4.Update student details");
    printf("\n5.Delete student details");
    printf("\nEnter your choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            add();
        break;
        case 2:
            displayall();
        break;
        case 3:
            display();
        break;
        case 4:
        break;
        case 5:
        break;
    }
    char temp;
    printf("\nPress 'Y' to continue and 'N' to exit = ");
    scanf(" %c",&temp);
    if(temp=='Y' || temp=='y')
    {
        goto up;
    }
    return 0;
}

void add()
{
    int count,i;
    printf("\nEnter the number of students = ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        printf("\nEnter the roll no. = ");
        scanf("%d",&s[st].roll);
        printf("\nEnter the name = ");
        scanf("%s",s[st].name);
        printf("\nEnter the percentage = ");
        scanf("%f",&s[st].percentage);
        if(s[st].percentage>80)
        {
            s[st].grade = 'A';
        }
        else if(s[st].percentage<=80 && s[st].percentage>35)
        {
            s[st].grade = 'B';
        }
        else
        {
            s[st].grade = 'C';
        }
        st++;
    }
}

void displayall()
{
    int i;
    printf("\n---------------------------------------");
    printf("\nRoll no.  ||Name  ||Percentage  ||Grade");
    printf("\n---------------------------------------");
    for(i=0;i<st;i++)
    {
        printf("\n%d          %s       %.2f         %c",s[i].roll,s[i].name,s[i].percentage,s[i].grade);    
    }
}

void display()
{
    int choice,id,i;
    float per;
    char grd;
    char str[25];
    printf("\n1.Search by Roll no.");
    printf("\n2.Search by Name");
    printf("\n3.Search by Percentage");
    printf("\n4.Search by Grade");
    printf("\nEnter the choice = ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nEnter the roll no. = ");
            scanf("%d",&id);
            for(i=0;i<st;i++)
            {
                if(id==s[i].roll)
                {
                    printf("\n---------------------------------------");
                    printf("\nRoll no.  ||Name  ||Percentage  ||Grade");
                    printf("\n---------------------------------------");
                    printf("\n%d          %s       %.2f         %c",s[i].roll,s[i].name,s[i].percentage,s[i].grade);    
                }
            }
        break;
        case 2:
            printf("\nEnter the name = ");
            scanf("%s",&str);
            for(i=0;i<st;i++)
            {
                int temp = strcmp(str,s[i].name);
                if(temp==0)
                {
                    printf("\n---------------------------------------");
                    printf("\nRoll no.  ||Name  ||Percentage  ||Grade");
                    printf("\n---------------------------------------");
                    printf("\n%d          %s       %.2f         %c",s[i].roll,s[i].name,s[i].percentage,s[i].grade);
                }
            }
        break;
        case 3:
            printf("\nEnter the percentage = ");
            scanf("%f",&per);
            printf("\n1.Less than");
            printf("\n2.Greater than");
            printf("\nEnter your choice = ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    for(i=0;i<st;i++)
                    {
                        if(s[i].percentage<per)
                        {
                            printf("\n---------------------------------------");
                            printf("\nRoll no.  ||Name  ||Percentage  ||Grade");
                            printf("\n---------------------------------------");
                            printf("\n%d          %s       %.2f         %c",s[i].roll,s[i].name,s[i].percentage,s[i].grade);
                        }
                    }
                break;
                case 2:
                    for(i=0;i<st;i++)
                    {
                        if(s[i].percentage>per)
                        {
                            printf("\n---------------------------------------");
                            printf("\nRoll no.  ||Name  ||Percentage  ||Grade");
                            printf("\n---------------------------------------");
                            printf("\n%d          %s       %.2f         %c",s[i].roll,s[i].name,s[i].percentage,s[i].grade);
                        }
                    }
                break;
            }
        break;
        case 4:
            printf("\nEnter the Grade = ");
            scanf(" %c",&grd);
            for(i=0;i<st;i++)
            {
                if(s[i].grade==grd)
                {
                    printf("\n---------------------------------------");
                    printf("\nRoll no.  ||Name  ||Percentage  ||Grade");
                    printf("\n---------------------------------------");
                    printf("\n%d          %s       %.2f         %c",s[i].roll,s[i].name,s[i].percentage,s[i].grade);
                }
            }
        break;
    }
}
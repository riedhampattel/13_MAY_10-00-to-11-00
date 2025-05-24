#include<stdio.h>
int main()
{
    int i;
    printf("\nFor loop := ");
    for(i=10;i<=5;i++)
    {
       printf("\nTops Technologies"); 
    }

    printf("\nWhile loop := ");
    i = 10;
    while(i<=5)
    {
        printf("\nTops Technologies");
        printf("\nBye");
        i++;
    }

    printf("\nDo while loop := ");
    i = 10;
    do
    {
        printf("\nTops Technologies");
        printf("\nBye");//5
        i++;//6
    }while(i<=5);
    return 0;
}
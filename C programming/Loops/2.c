#include<stdio.h>
int main()
{
    int i;
    printf("\nNumbers ranging 1 to 10 = ");
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }
    printf("\nNumbers rabging 10 to 1 = ");
    for(i=10;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}
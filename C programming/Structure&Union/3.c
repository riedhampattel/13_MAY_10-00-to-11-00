#include<stdio.h>
union Demo
{
	int i;
	char ch;
};
struct Temp
{
	int a;
	char b;
};
int main()
{
	union Demo u;
	u.i = 68;
	u.ch = 'A';
	printf("\nValue of i = %d",u.i);	
	printf("\nValue of ch = %c",u.ch);
	
	struct Temp s;
	s.a = 68;
	s.b = 'A';
	printf("\nValue of a = %d",s.a);
	printf("\nValue of b = %c",s.b);
	return 0;
}

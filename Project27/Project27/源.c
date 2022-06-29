#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int a = 200;
void f()
{
	static a = 20;
	a++;
	printf("%d,", a);
}
int main()
{
	int i;
	for(i = 1; i <= 3; i++)
	{
		a++;
		printf("%d", a);
		f();
	}
	return 0;
}
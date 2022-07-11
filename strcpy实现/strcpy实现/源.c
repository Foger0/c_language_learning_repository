#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<assert.h>
void my_strcpy(char a[],char b[])
{
	assert(a &&b);
	while (*(a++) = *(b++));
}
int main()
{
	char a[10];
	char b[10] = "sbcd";
	my_strcpy(a, b);
	puts(a);
	return 0;
}
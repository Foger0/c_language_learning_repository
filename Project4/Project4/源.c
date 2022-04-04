#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("1");
	else
		printf("max=%d\n", b);

	return 0;
}

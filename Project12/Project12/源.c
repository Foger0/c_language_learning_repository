#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int gongyue(int a, int b)
{
	if (a % b == 0)
		return b;
	else
		gongyue(b, a % b);
}
int main()
{
	int i = 0;
	int n = 0;
	int a=scanf("%d%d", &i, &n);
	printf("%d\n",gongyue(i, n));
	printf("%d", a);
    return 0;
}
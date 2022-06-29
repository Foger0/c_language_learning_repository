#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
void print(int a)
{
	for (int i=1;i<=a;i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i > j)
				printf("%2d*%d=%2d", j, i, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	scanf("%d",&a);
	print(a);
	return 0;
}
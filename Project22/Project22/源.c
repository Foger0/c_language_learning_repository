#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
float add_s(int a)
{
	
	float sum = 1;
	float sum1 = 0;
	for (int i=0;i<a;i++)
	{
		sum = 1;
		for (int n = 1;n<=i;n++)
		{
			sum = sum * n;
		}
		sum1 = sum1 + (1/sum);
	}
	return sum1;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("e=%.4f", add_s(a));
	return 0;
}
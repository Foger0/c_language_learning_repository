#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int a[16] = { 0 };
	int b[16] = { 0 };
	int c = 0;
	scanf("%d",&c);
	for (int i = 0; i < 32; i++)
	{
		if (i % 2 == 0)
		{
			 a[i/2] = c & 1;
		}
		if (i % 2 != 0)
		{
			b[i/2]= c & 1;
		}
		c=c >> 1;
	}
	printf("奇数位");
	for(int j=0;j<16;j++)
	{
		printf("%d",b[j]);
	}
	printf("\n");
	printf("偶数位");
	for (int j = 0; j <16; j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}
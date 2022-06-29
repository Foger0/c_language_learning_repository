#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int m = 0;
	scanf("%d",&m);
	int count = 0;
	int em = 0;
	for (int i = 0; i < m; i++)
	{
		count++;
		em++;
			if (em % 2 == 0)
			{
				count++;
				em++;
			}
	}
	printf("%d", count);
	return 0;
}
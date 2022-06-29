#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>

int main()
{
	int arr[5][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7,4,5,6,7,8,5,6,7,16,18 };
	int z = 0;
	int s = 0;
	int y = 4;
	int x = 4;
	int a = 0;
	scanf("%d", &a);
	while (1)
	{
		int mid1 = (z + y) / 2;
		int mid2 = (s + x) / 2;
		int judge = 0;
		if (arr[mid1][mid2] > a)
		{
			y = mid1;
			x = mid2;
		}
		if (arr[mid1][mid2] < a)
		{
			z = mid1;
			s = mid2;
		}
		if (arr[mid1][mid2]==a)
		{
			printf("找到了其中一个下标为%d %d",mid1,mid2);
			judge = 1;
		}
		if (z + 1 == y && s + 1 == x)
		{
			for(int i=0;i<2;i++)
				for (int j = 0; j < 2; j++)
				{
					if (a == arr[z + i][s + j])
					{
						printf("找到了其中一个下标为%d %d", z + i, s + j);
						judge = 1;
						break;
					}
					else
					{
						judge = 2;
					}
				}
		}
		if (judge == 1)
			break;
		if (judge == 2)
		{
			printf("没有此数");
			break;
		}
	}return 0;
}
#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5][5] = { 0 };
	//输入矩阵
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//比绝对值大小 
	int a = 0; int b = 0;
	for (int h = 0; h < 5; h++)
	{
		int max =abs(arr[h][0]);
		for (int n = 0; n < 5; n++)
		{
			if (abs(arr[h][n]) > abs(max))
			{
				max = arr[h][n];
				//找两个数存下此时下标
				a = h; b = n;
		    }
         }
	//交换对角线和绝对值最大元素
		for (int k = 0; k < 5; k++)
			if (h== k)
			{	
				arr[a][b] = arr[h][k];
				arr[h][k] = max;
			}
	}
	//打印数组
	for(int t= 0;t<5;t++)
	{
		for (int c=0;c<5;c++)
		{
			printf("%4d", arr[t][c]);
		}
		printf("\n");
	}
	return 0;
}
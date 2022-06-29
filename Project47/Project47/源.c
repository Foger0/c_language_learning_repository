#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int judge(int arr[])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j =-i; j < 5-i; j++)
		{
			if (arr[i] == arr[i + j]&&i!=i+j)
				return 0;
		}
	}
	return 1;
}
int jjudge(int arr[])
{
	if ((arr[1] == 2 && arr[0] == 3) || (arr[1] != 2 && arr[0] != 3))
	{
		return 0;
	}
	if ((arr[1] == 2 && arr[4] == 4)|| (arr[1] != 2 && arr[4] != 4))
	{
		return 0;
	}
	if ((arr[2] ==1 && arr[3] == 2)||(arr[2] != 1 && arr[3] != 2))
	{
		return 0;
	}
	if ((arr[2] == 5 && arr[3] == 3) || (arr[2] != 5 && arr[3] != 3))
	{
		return 0;
	}
	if ((arr[4] == 4 && arr[0] == 1) || (arr[4] != 4 && arr[0] != 1))
	{
		return 0;
	}
	return 1;
}
int main()
{
	int arr[5] = { 0 };
	for (int a = 1; a <= 5; a++)
	{
		arr[0] = a;
		for (int b = 1; b <= 5; b++)
		{
			arr[1] = b;
		
			for (int c = 1; c <= 5; c++)
			{
				arr[2] = c;
				for (int d = 1; d <= 5; d++)
				{
					arr[3] = d;
					for (int e = 1; e <= 5; e++)
					{
						arr[4] = e;
						if (judge(arr) == 1)
						{
							int j = jjudge(arr);
							if(j==1)
							for (int i = 0; i < 5; i++)
							{
								printf("%c=%d\n",65+i,arr[i]);
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}
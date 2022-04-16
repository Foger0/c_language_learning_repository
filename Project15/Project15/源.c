#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1; j++)
		{
			if (arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main()
{
	int arr[11] = { 127,3,6,28,54,68,87,105,162,18 };
    int sz=sizeof(arr) / sizeof(arr[0]);	
	//冒泡排序
	bubble_sort(arr, sz);
	//第一次打印不打出0，少循环一次
	for (int w = 0; w < sz - 1; w++)
	{
		printf("%4d", arr[w]);
	}
	//插入数字
	printf("\ninput number:\n");
	int input = 0;
	scanf("%d",&input);
		arr[10] = input;
	//再次排序并打印
	bubble_sort(arr, sz);
	for (int n = 0; n < sz; n++)
	{
		printf("%4d", arr[n]);
	}
	return 0;
}
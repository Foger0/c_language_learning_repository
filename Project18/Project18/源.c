#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,4,5,6,7,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	int a = 0;
	scanf("%d", &a);
	int left =0;
	int right = sz;
	while (left <=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > a)
		{
			right = mid-1;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了下标是%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");
	return 0;
}
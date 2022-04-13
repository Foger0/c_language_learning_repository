#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
void bouble(int arr[],int a)
{
	int i = 0;
	for (; i < a - 1; i++)
	{
		int j = 0;
		for (; j < a - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] =arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}


}


int main()
{
	int arr[3] = { 0 };
	int a = 3;
	int m = 0;
	for (; m < 3; m++)
		scanf("%d", &arr[m]);
	bouble(arr,a);
	int i = 0;
	for (i = 0; i < a; i++)
		printf("%d ", arr[i]);
	return 0;
}
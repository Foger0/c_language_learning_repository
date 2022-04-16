#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{
	int arr1[5][6] = { 0 };
	int sum = 0;
	printf("Enter integers:\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			scanf("%d", &arr1[i][j]);
			if(i==0||i==4||j==0||j==5)
			sum = sum + arr1[i][j];
        }
    }printf("sum=%d", sum);
     return 0;
}
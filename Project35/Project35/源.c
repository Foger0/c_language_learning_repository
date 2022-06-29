#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
float max = 0; 
float min = 0;

float fun2(float b[])
{
	max=b[0];
	min= b[0];
	float sum = 0;
	for (int i = 0; i < 10; i++)
	{
		if (b[i] < min)
			min = b[i];
		if (b[i] > max)
			max = b[i];
		sum += b[i];
	}
	return sum / 10;
}
int main()
{
	float b[10] = {0};
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &b[i]);
	}
	float ave=fun2(b);
	printf("max = % 6.2f\nmin = % 6.2f\naverage = % 6.2f\n", max, min, ave);
	return 0;
}
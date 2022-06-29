#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
void exchange(int a,char str[])
{
	for (int i = 0,j=0;a>0;i++,j++)
	{
		
		if (i % 3 == 0&&i!=0)
		{
			str[i] = ',';
			j++;
		}
			str[j] = a % 10+'0';
			a=a / 10;
	}
	
}
int main()
{
	
	return 0;
}
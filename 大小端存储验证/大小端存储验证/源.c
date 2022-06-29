#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{//方式一：强制类型转换
	/*int a = 1;
	int* p = &a;
	if ((char*)p == 0)
	{
		printf("大端存储");
	}
	else
	{
		printf("小端存储");
	}*/
//方式二：共用体
	union {
		int a;
		char c;
	}u;
	u.a = 1;
	if (u.c== 0)
	{
		printf("大端存储");
	}
	else
	{
		printf("小端存储");
	}
}
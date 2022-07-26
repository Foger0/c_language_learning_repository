#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int Add(int a,int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
void add(int p(int, int))
{
	printf("%d",p(1, 2));
}
int main()
{
	int a = 0;
	int b = 0;
	int(*p)(int, int) = &Add;//(此处*不能漏因为为声明函数指针）
	int c = (* p)(1, 2);//正常使用
	add(Add);//传参
	int(*pa[10])(int x, int y) = {Add,Sub};//函数指针数组
	printf(",%d",pa[1](4, 2));
	return 0;
}
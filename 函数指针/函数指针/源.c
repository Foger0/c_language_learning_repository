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
	int(*p)(int, int) = &Add;//(�˴�*����©��ΪΪ��������ָ�룩
	int c = (* p)(1, 2);//����ʹ��
	add(Add);//����
	int(*pa[10])(int x, int y) = {Add,Sub};//����ָ������
	printf(",%d",pa[1](4, 2));
	return 0;
}
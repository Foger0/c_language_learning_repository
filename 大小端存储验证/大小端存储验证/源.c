#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int main()
{//��ʽһ��ǿ������ת��
	/*int a = 1;
	int* p = &a;
	if ((char*)p == 0)
	{
		printf("��˴洢");
	}
	else
	{
		printf("С�˴洢");
	}*/
//��ʽ����������
	union {
		int a;
		char c;
	}u;
	u.a = 1;
	if (u.c== 0)
	{
		printf("��˴洢");
	}
	else
	{
		printf("С�˴洢");
	}
}
#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
int mystrlen(char* x)
{
	int a = 0;
	for (;*x!='\0'; x++,a++)
	{

	}
	return a;
}
int main()
{
	char arr[] = "�Ҵ����Ǵ�";
	int a = mystrlen(arr);
	printf("%d\n", a);
	return 0;
}
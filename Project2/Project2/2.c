#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char ret;
	char password[10] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	getchar();
	printf("请确认（Y/N）:>");

	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
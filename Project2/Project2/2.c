#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char ret;
	char password[10] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	getchar();
	printf("��ȷ�ϣ�Y/N��:>");

	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}
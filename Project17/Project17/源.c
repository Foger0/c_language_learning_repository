#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	//��rand������ֵ����һ��������
	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		arr[i] = rand() % 10;
    }
//�û�����һ����λ��������Ϊ�ĸ�����
	int judge = 1;
	for(int cishu=0;cishu<6;cishu++)
	{int guess = 0;
	printf("��������һ����λ��>:");
	scanf("%d",&guess);
	int gewei = guess % 10;
	int shiwei = (guess / 10) % 10;
	int baiwei = (guess / 100) % 10;
	int qianwei = guess / 1000;
	//�ж��м������������е�����ͬ
	int same = 0;
	if (qianwei == arr[0])
	{
		same++;
	}
	if (baiwei == arr[1])
	{
		same++;
	}
	if (shiwei == arr[2])
	{
		same++;
	}
	if (gewei == arr[3])
	{
		same++;
	}
	printf("���¶���%d����\n", same); 
	if (same == 4)
	{
		printf("��ȫ�¶���\n");
			judge = 0;
			break;		
	}
	
	}
	if (judge == 1)
	{
		printf("���Ļ��������ˣ��������\n");
		for (int i = 0; i < 4; i++)
		{
			printf("%d", arr[i]);
		}
		printf("\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
do
{
	    printf("**************************************\n");
		printf("**************������******************\n");
		printf("*******1.start*********0.exit*********\n");
		scanf("%d", &input);
	switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
				break;
		default:
			printf("��������\n");
		}
} while (input);
return 0;
}
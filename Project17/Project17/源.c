#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	//将rand函数的值存在一个数组中
	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		arr[i] = rand() % 10;
    }
//用户输入一个四位数将其拆解为四个数字
	int judge = 1;
	for(int cishu=0;cishu<6;cishu++)
	{int guess = 0;
	printf("请您输入一个四位数>:");
	scanf("%d",&guess);
	int gewei = guess % 10;
	int shiwei = (guess / 10) % 10;
	int baiwei = (guess / 100) % 10;
	int qianwei = guess / 1000;
	//判断有几个数跟数组中的数相同
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
	printf("您猜对了%d个数\n", same); 
	if (same == 4)
	{
		printf("完全猜对了\n");
			judge = 0;
			break;		
	}
	
	}
	if (judge == 1)
	{
		printf("您的机会用完了，这个数是\n");
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
		printf("**************猜数字******************\n");
		printf("*******1.start*********0.exit*********\n");
		scanf("%d", &input);
	switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
				break;
		default:
			printf("重新输入\n");
		}
} while (input);
return 0;
}
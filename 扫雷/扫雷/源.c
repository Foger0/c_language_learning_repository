#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//**********开发日志*************
//1.打印菜单
//2.两个数组生成并初始化lei全0一个show全*srand
//3.数组lei安雷rand放1
//4.打印数组
//5.扫雷
//6.判断
#define COL COL1+2
#define ROW ROW1+2
#define COL1 9
#define ROW1 9
#define LEI 3
void minesum(char lei[ROW][COL], char show[ROW][COL], int a, int b);
int iswin(char a[ROW][COL], int row, int col)
{
	int n = 0;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (a[i][j] != '*')
				n=n + 1;
		}
	}
	return n;
}
void initboard(char a[ROW][COL], int row, int col, char b)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			a[i][j]=b;
        }
    }
}
void print(char a[ROW][COL], int row, int col)
{
	int r = 0;
	int l = 0;
	printf("  ");
	for (int i = 0; i < row; i++)
	{
		printf("%d ", ++r);
	}
	printf("\n");
	for (int i = 1; i <=row; i++)
	{
	    printf("%d ", ++l);
		for (int j = 1; j <=col; j++)
		{
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
void set(char lei[ROW][COL], int row, int col)
{
	int count =LEI;
	while(count)
	{
		int a = rand() % row + 1;
	     int b = rand() % col + 1;
		if (lei[a][b] == '0')
		{
			lei[a][b] = '1';
			count--;
		}
	}
}
void find(char lei[ROW][COL], char show[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;
	int win1 = 0;
	
    while (1)
	{
		printf("请输入查找坐标>:");
		scanf("%d%d", &a, &b);
		if (a >= 1 && a <= row && b >= 1 && b <= col&&show[a][b]=='*')
		{
			if (lei[a][b] == '1')
			{
				printf("你被炸死了\n");
				print(lei, ROW1, COL1);
				break;
			}
			if (lei[a][b] == '0')
			{
				minesum(lei, show, a, b);//将数组show的a，b变成周围雷数和
				print(show, ROW1, COL1);
			}
		}
		else
		{
			printf("输入非法，请重新输入");
		}
		win1 = iswin(show, ROW1, COL1);
		if (win1 == ROW1 * COL1 - LEI)
		{
			printf("你赢了\n");
			break;
		}
	}
}
void minesum(char lei[ROW][COL],char show[ROW][COL], int a, int b)
{
	int sum = 0;
	for (int i = -1; i <= 1; i++)//将其加和
	{
		for (int j= -1; j <= 1;j++)
		{
			if ((a + i) != a || (j + b) != b)//扫描到本身为什么会越界？
			{
				sum = sum + lei[a + i][b + j] - '0';
			}
		}
	}
	show[a][b] = sum+'0';
	if (show[a][b] == '0')
	{
		show[a][b] = ' ';
		for (int i = -1; i <= 1; i++)//递归
		{
			for (int j = -1; j <= 1; j++)
			{
				if (((a + i) != a || (j + b) != b)&&show[a + i][j + b]=='*'&&a+i>0&&a+i<ROW&&b+j>0&&b+j<COL)
				{
					minesum(lei, show, a+i, b+j);
				}
			}
		}
	}
	
}
void game()
{
	int win1 = 0;
	char lei[ROW][COL] = { 0 };
	char show[ROW][COL] = { 0 };
	srand((unsigned)time(NULL));
	initboard(lei, ROW, COL, '0');
	initboard(show, ROW, COL, '*');
	print(show, ROW1, COL1);
	set(lei, ROW1, COL1);
	/*print(lei, ROW1, COL1);*/
    find(lei, show, ROW1, COL1);
}
int main()
{
	do {
		int input = 0;
		printf("*************扫雷*************\n");
		printf("*****1.开始********0.退出*****\n");
		printf("******************************\n");
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
				break;
		case 1:
			game();
			break;
		default:
			printf("重新输入\n");
			break;
		}
		if (input == 0)
			break;
	} while (1);

	return 0;
}
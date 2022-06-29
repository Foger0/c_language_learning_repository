#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//**********������־*************
//1.��ӡ�˵�
//2.�����������ɲ���ʼ��leiȫ0һ��showȫ*srand
//3.����lei����rand��1
//4.��ӡ����
//5.ɨ��
//6.�ж�
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
		printf("�������������>:");
		scanf("%d%d", &a, &b);
		if (a >= 1 && a <= row && b >= 1 && b <= col&&show[a][b]=='*')
		{
			if (lei[a][b] == '1')
			{
				printf("�㱻ը����\n");
				print(lei, ROW1, COL1);
				break;
			}
			if (lei[a][b] == '0')
			{
				minesum(lei, show, a, b);//������show��a��b�����Χ������
				print(show, ROW1, COL1);
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
		win1 = iswin(show, ROW1, COL1);
		if (win1 == ROW1 * COL1 - LEI)
		{
			printf("��Ӯ��\n");
			break;
		}
	}
}
void minesum(char lei[ROW][COL],char show[ROW][COL], int a, int b)
{
	int sum = 0;
	for (int i = -1; i <= 1; i++)//����Ӻ�
	{
		for (int j= -1; j <= 1;j++)
		{
			if ((a + i) != a || (j + b) != b)//ɨ�赽����Ϊʲô��Խ�磿
			{
				sum = sum + lei[a + i][b + j] - '0';
			}
		}
	}
	show[a][b] = sum+'0';
	if (show[a][b] == '0')
	{
		show[a][b] = ' ';
		for (int i = -1; i <= 1; i++)//�ݹ�
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
		printf("*************ɨ��*************\n");
		printf("*****1.��ʼ********0.�˳�*****\n");
		printf("******************************\n");
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
				break;
		case 1:
			game();
			break;
		default:
			printf("��������\n");
			break;
		}
		if (input == 0)
			break;
	} while (1);

	return 0;
}
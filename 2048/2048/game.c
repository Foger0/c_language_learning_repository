#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW  3
#define DOL  3
void menu()
{
	printf("************************************************\n");
	printf("******************1.play  0.exit****************\n");
	printf("************************************************\n");
}
int randset(int arr[ROW][DOL], int row, int dol)
{ 
	int jug = 0;
	int jug1 = 0;
	while (jug<30000)
	{
		int r = rand() % row;
		int d = rand() % dol;
		if (arr[r][d] == 0)
		{
			arr[r][d] = 2;
			jug1 = 1;
			break;
		}
		else
			jug++;
	}
	return jug1;
}
void move(int arr[ROW][DOL], int row, int dol)
{
	int iput = 0;
	printf("��ѡ�񻬶�����>:1.����2.����3.����4.����\n");
    scanf("%d", &iput);
	switch (iput)
	{
		case 1:
			for (int j = 0; j < 3; j++)
			{
				if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] != 0)
				{//����Ϊ������
					if (arr[1][j] == arr[0][j])//�϶����
					{
						arr[0][j] = arr[1][j] + arr[0][j];
						arr[1][j] = arr[2][j];
						arr[2][j] = 0;
					}
					else if (arr[2][j] == arr[1][j] && arr[1][j] != arr[0][j])//�¶���Ȳ�����һ
					{
						arr[1][j] = arr[1][j] + arr[2][j];
						arr[2][j] = 0;
					}
				}
				else
				{
					if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] == 0)//һ����������
					{
						if (arr[0][j] == arr[1][j])//���
						{
							arr[0][j] = arr[1][j] + arr[0][j];
							arr[1][j] = 0;

						}

					}
					if (arr[0][j] != 0 && arr[2][j] != 0 && arr[1][j] == 0)//һ�������м�
					{
						if (arr[0][j] == arr[2][j])
						{
							arr[0][j] = arr[2][j] + arr[0][j];
							arr[2][j] = 0;
						}
						else//����
						{
							arr[1][j] = arr[2][j];
							arr[2][j] = 0;
						}

					}
					if (arr[1][j] != 0 && arr[2][j] != 0 && arr[0][j] == 0)//һ����������
					{
						if (arr[1][j] == arr[2][j])
						{
							arr[0][j] = arr[2][j] + arr[1][j];
							arr[2][j] = 0;
							arr[1][j] = 0;
						}
						else//����
						{
							arr[0][j] = arr[1][j];
							arr[1][j] = arr[2][j];
							arr[2][j] = 0;
						}
					}//���治Ϊ�㲻�ı�
					if (arr[1][j] != 0 && arr[2][j] == 0 && arr[0][j] == 0)//�м䲻Ϊ��
					{
						arr[0][j] = arr[1][j];
						arr[1][j] = 0;
					}
					if (arr[2][j] != 0 && arr[1][j] == 0 && arr[0][j] == 0)//���治Ϊ��
					{
						arr[0][j] = arr[2][j];
						arr[2][j] = 0;
					}
				}

			}break;

		case 2://����
			for (int j = 0; j < 3; j++)
			{
				if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] != 0)
				{//����Ϊ������
					if (arr[1][j] == arr[0][j] && arr[1][j] != arr[2][j])//�϶���Ȳ�����һ
					{
						arr[1][j] = arr[1][j] + arr[0][j];
						arr[0][j] = 0;
					}
					else if (arr[2][j] == arr[1][j])//�¶����
					{
						arr[2][j] = arr[1][j] + arr[2][j];
						arr[1][j] = arr[0][j];
						arr[0][j] = 0;
					}
				}
				else
				{
					if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] == 0)//һ����������
					{
						if (arr[0][j] == arr[1][j])//���
						{
							arr[2][j] = arr[1][j] + arr[0][j];
							arr[1][j] = 0;
							arr[0][j] = 0;
						}
						else//����
						{
							arr[2][j] = arr[1][j];
							arr[1][j] = arr[0][j];
							arr[0][j] = 0;
						}

					}
					if (arr[0][j] != 0 && arr[2][j] != 0 && arr[1][j] == 0)//һ�������м�
					{
						if (arr[0][j] == arr[2][j])
						{
							arr[2][j] = arr[2][j] + arr[0][j];
							arr[0][j] = 0;
						}
						else//����
						{
							arr[1][j] = arr[0][j];
							arr[0][j] = 0;
						}

					}
					if (arr[1][j] != 0 && arr[2][j] != 0 && arr[0][j] == 0)//һ����������
					{
						if (arr[1][j] == arr[2][j])//���
						{
							arr[2][j] = arr[1][j] + arr[2][j];
							arr[1][j] = 0;
						}
					}//���治Ϊ�㲻�ı�
					if (arr[1][j] != 0 && arr[2][j] == 0 && arr[0][j] == 0)//�м䲻Ϊ��
					{
						arr[2][j] = arr[1][j];
						arr[1][j] = 0;
					}
					if (arr[0][j] != 0 && arr[1][j] == 0 && arr[2][j] == 0)//���治Ϊ��
					{
						arr[2][j] = arr[0][j];
						arr[0][j] = 0;
					}
				}

			}break;
		case 3://����
			for (int j = 0; j < 3; j++)
			{
				if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] != 0)
				{//����Ϊ������
					if (arr[j][1] == arr[j][0])//������
					{
						arr[j][0] = arr[j][1] + arr[j][0];
						arr[j][1] = arr[j][2];
						arr[j][2] = 0;
					}
					else if (arr[j][2] == arr[j][1] && arr[j][1] != arr[j][0])//�Ҷ���Ȳ�����һ
					{
						arr[j][1] = arr[j][1] + arr[j][2];
						arr[j][2] = 0;
					}
				}
				else
				{
					if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] == 0)//һ����������
					{
						if (arr[j][0] == arr[j][1])//���
						{
							arr[j][0] = arr[j][1] + arr[j][0];
							arr[j][1] = 0;

						}

					}
					if (arr[j][1] != 0 && arr[j][2] != 0 && arr[j][1] == 0)//һ�������м�
					{
						if (arr[j][0] == arr[j][2])
						{
							arr[j][0] = arr[j][2] + arr[j][0];
							arr[j][2] = 0;
						}
						else//����
						{
							arr[j][1] = arr[j][2];
							arr[j][2] = 0;//
						}

					}
					if (arr[j][1] != 0 && arr[j][2] != 0 && arr[j][0] == 0)//һ����������
					{
						if (arr[j][1] == arr[j][2])
						{
							arr[j][0] = arr[j][2] + arr[j][1];
							arr[j][2] = 0;
							arr[j][1] = 0;
						}
						else//����
						{
							arr[j][0] = arr[j][1];
							arr[j][1] = arr[j][2];
							arr[j][2] = 0;
						}
					}//���治Ϊ�㲻�ı�
					if (arr[j][1] != 0 && arr[j][2] == 0 && arr[j][0] == 0)//�м䲻Ϊ��
					{
						arr[j][0] = arr[j][1];
						arr[j][1] = 0;
					}
					if (arr[j][2] != 0 && arr[j][1] == 0 && arr[j][0] == 0)//���治Ϊ��
					{
						arr[j][0] = arr[j][2];
						arr[j][2] = 0;
					}
				}

			}break;
		case 4://����
			for (int j = 0; j < 3; j++)
			{
				if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] != 0)
				{//����Ϊ������
					if (arr[j][1] == arr[j][0] && arr[j][1] != arr[j][2])//�϶���Ȳ�����һ
					{
						arr[j][1] = arr[j][1] + arr[j][0];
						arr[j][0] = 0;
					}
					else if (arr[j][2] == arr[j][1])//�¶����
					{
						arr[j][2] = arr[j][1] + arr[j][2];
						arr[j][1] = arr[j][0];
						arr[j][0] = 0;
					}
				}
				else
				{
					if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] == 0)//һ����������
					{
						if (arr[j][0] == arr[j][1])//���
						{
							arr[j][2] = arr[j][1] + arr[j][0];
							arr[j][1] = 0;
							arr[j][0] = 0;
						}
						else//����
						{
							arr[j][2] = arr[j][1];
							arr[j][1] = arr[j][0];
							arr[j][0] = 0;
						}

					}
					if (arr[j][0] != 0 && arr[j][2] != 0 && arr[j][1] == 0)//һ�������м�
					{
						if (arr[j][0] == arr[j][2])
						{
							arr[j][2] = arr[j][2] + arr[j][0];
							arr[j][0] = 0;
						}
						else//����
						{
							arr[j][1] = arr[j][0];
							arr[j][0] = 0;
						}

					}
					if (arr[j][1] != 0 && arr[j][2] != 0 && arr[j][0] == 0)//һ����������
					{
						if (arr[j][1] == arr[j][2])//���
						{
							arr[j][2] = arr[j][1] + arr[j][2];
							arr[j][1] = 0;
						}
					}//���治Ϊ�㲻�ı�
					if (arr[j][1] != 0 && arr[j][2] == 0 && arr[j][0] == 0)//�м䲻Ϊ��
					{
						arr[j][2] = arr[j][1];
						arr[j][1] = 0;
					}
					if (arr[j][0] != 0 && arr[j][1] == 0 && arr[j][2] == 0)//���治Ϊ��
					{
						arr[j][2] = arr[j][0];
						arr[j][0] = 0;
					}
				}

			}break;
}


}




void displayboard(int arr[ROW][DOL],int row,int dol)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < dol; j++)
		{
			printf("%3d", arr[i][j]);
			if (j < dol - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < dol; j++)
			{
				printf("---");
				if (j < dol - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}
void game()
{
	int arr[ROW][DOL] = { 0 };
	int win = 0;
	int judge = 0;
	int sum = 0;
	while (sum<=6&&judge==0)
	{
	 win = randset(arr, ROW, DOL);
		displayboard(arr, ROW, DOL);
		move(arr, ROW, DOL);
		printf("\n");
		 sum = win + sum;
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < DOL; j++)
			{
				if (arr[i][j] == 512)
				{
					displayboard(arr, ROW, DOL);
					printf("��Ӯ��\n");
					judge = 1;
				}
			}
		}
	}
	if (sum > 6)
		printf("������\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("2048\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);



	return 0;
}
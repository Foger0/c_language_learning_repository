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
	printf("请选择滑动方向>:1.向上2.向下3.向左4.向右\n");
    scanf("%d", &iput);
	switch (iput)
	{
		case 1:
			for (int j = 0; j < 3; j++)
			{
				if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] != 0)
				{//都不为零的情况
					if (arr[1][j] == arr[0][j])//上二相等
					{
						arr[0][j] = arr[1][j] + arr[0][j];
						arr[1][j] = arr[2][j];
						arr[2][j] = 0;
					}
					else if (arr[2][j] == arr[1][j] && arr[1][j] != arr[0][j])//下二相等不等上一
					{
						arr[1][j] = arr[1][j] + arr[2][j];
						arr[2][j] = 0;
					}
				}
				else
				{
					if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] == 0)//一个零在最下
					{
						if (arr[0][j] == arr[1][j])//相等
						{
							arr[0][j] = arr[1][j] + arr[0][j];
							arr[1][j] = 0;

						}

					}
					if (arr[0][j] != 0 && arr[2][j] != 0 && arr[1][j] == 0)//一个零在中间
					{
						if (arr[0][j] == arr[2][j])
						{
							arr[0][j] = arr[2][j] + arr[0][j];
							arr[2][j] = 0;
						}
						else//不等
						{
							arr[1][j] = arr[2][j];
							arr[2][j] = 0;
						}

					}
					if (arr[1][j] != 0 && arr[2][j] != 0 && arr[0][j] == 0)//一个零在上面
					{
						if (arr[1][j] == arr[2][j])
						{
							arr[0][j] = arr[2][j] + arr[1][j];
							arr[2][j] = 0;
							arr[1][j] = 0;
						}
						else//不等
						{
							arr[0][j] = arr[1][j];
							arr[1][j] = arr[2][j];
							arr[2][j] = 0;
						}
					}//上面不为零不改变
					if (arr[1][j] != 0 && arr[2][j] == 0 && arr[0][j] == 0)//中间不为零
					{
						arr[0][j] = arr[1][j];
						arr[1][j] = 0;
					}
					if (arr[2][j] != 0 && arr[1][j] == 0 && arr[0][j] == 0)//下面不为零
					{
						arr[0][j] = arr[2][j];
						arr[2][j] = 0;
					}
				}

			}break;

		case 2://向下
			for (int j = 0; j < 3; j++)
			{
				if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] != 0)
				{//都不为零的情况
					if (arr[1][j] == arr[0][j] && arr[1][j] != arr[2][j])//上二相等不等下一
					{
						arr[1][j] = arr[1][j] + arr[0][j];
						arr[0][j] = 0;
					}
					else if (arr[2][j] == arr[1][j])//下二相等
					{
						arr[2][j] = arr[1][j] + arr[2][j];
						arr[1][j] = arr[0][j];
						arr[0][j] = 0;
					}
				}
				else
				{
					if (arr[0][j] != 0 && arr[1][j] != 0 && arr[2][j] == 0)//一个零在最下
					{
						if (arr[0][j] == arr[1][j])//相等
						{
							arr[2][j] = arr[1][j] + arr[0][j];
							arr[1][j] = 0;
							arr[0][j] = 0;
						}
						else//不等
						{
							arr[2][j] = arr[1][j];
							arr[1][j] = arr[0][j];
							arr[0][j] = 0;
						}

					}
					if (arr[0][j] != 0 && arr[2][j] != 0 && arr[1][j] == 0)//一个零在中间
					{
						if (arr[0][j] == arr[2][j])
						{
							arr[2][j] = arr[2][j] + arr[0][j];
							arr[0][j] = 0;
						}
						else//不等
						{
							arr[1][j] = arr[0][j];
							arr[0][j] = 0;
						}

					}
					if (arr[1][j] != 0 && arr[2][j] != 0 && arr[0][j] == 0)//一个零在上面
					{
						if (arr[1][j] == arr[2][j])//相等
						{
							arr[2][j] = arr[1][j] + arr[2][j];
							arr[1][j] = 0;
						}
					}//下面不为零不改变
					if (arr[1][j] != 0 && arr[2][j] == 0 && arr[0][j] == 0)//中间不为零
					{
						arr[2][j] = arr[1][j];
						arr[1][j] = 0;
					}
					if (arr[0][j] != 0 && arr[1][j] == 0 && arr[2][j] == 0)//上面不为零
					{
						arr[2][j] = arr[0][j];
						arr[0][j] = 0;
					}
				}

			}break;
		case 3://向左
			for (int j = 0; j < 3; j++)
			{
				if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] != 0)
				{//都不为零的情况
					if (arr[j][1] == arr[j][0])//左二相等
					{
						arr[j][0] = arr[j][1] + arr[j][0];
						arr[j][1] = arr[j][2];
						arr[j][2] = 0;
					}
					else if (arr[j][2] == arr[j][1] && arr[j][1] != arr[j][0])//右二相等不等左一
					{
						arr[j][1] = arr[j][1] + arr[j][2];
						arr[j][2] = 0;
					}
				}
				else
				{
					if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] == 0)//一个零在最下
					{
						if (arr[j][0] == arr[j][1])//相等
						{
							arr[j][0] = arr[j][1] + arr[j][0];
							arr[j][1] = 0;

						}

					}
					if (arr[j][1] != 0 && arr[j][2] != 0 && arr[j][1] == 0)//一个零在中间
					{
						if (arr[j][0] == arr[j][2])
						{
							arr[j][0] = arr[j][2] + arr[j][0];
							arr[j][2] = 0;
						}
						else//不等
						{
							arr[j][1] = arr[j][2];
							arr[j][2] = 0;//
						}

					}
					if (arr[j][1] != 0 && arr[j][2] != 0 && arr[j][0] == 0)//一个零在上面
					{
						if (arr[j][1] == arr[j][2])
						{
							arr[j][0] = arr[j][2] + arr[j][1];
							arr[j][2] = 0;
							arr[j][1] = 0;
						}
						else//不等
						{
							arr[j][0] = arr[j][1];
							arr[j][1] = arr[j][2];
							arr[j][2] = 0;
						}
					}//上面不为零不改变
					if (arr[j][1] != 0 && arr[j][2] == 0 && arr[j][0] == 0)//中间不为零
					{
						arr[j][0] = arr[j][1];
						arr[j][1] = 0;
					}
					if (arr[j][2] != 0 && arr[j][1] == 0 && arr[j][0] == 0)//下面不为零
					{
						arr[j][0] = arr[j][2];
						arr[j][2] = 0;
					}
				}

			}break;
		case 4://向下
			for (int j = 0; j < 3; j++)
			{
				if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] != 0)
				{//都不为零的情况
					if (arr[j][1] == arr[j][0] && arr[j][1] != arr[j][2])//上二相等不等下一
					{
						arr[j][1] = arr[j][1] + arr[j][0];
						arr[j][0] = 0;
					}
					else if (arr[j][2] == arr[j][1])//下二相等
					{
						arr[j][2] = arr[j][1] + arr[j][2];
						arr[j][1] = arr[j][0];
						arr[j][0] = 0;
					}
				}
				else
				{
					if (arr[j][0] != 0 && arr[j][1] != 0 && arr[j][2] == 0)//一个零在最下
					{
						if (arr[j][0] == arr[j][1])//相等
						{
							arr[j][2] = arr[j][1] + arr[j][0];
							arr[j][1] = 0;
							arr[j][0] = 0;
						}
						else//不等
						{
							arr[j][2] = arr[j][1];
							arr[j][1] = arr[j][0];
							arr[j][0] = 0;
						}

					}
					if (arr[j][0] != 0 && arr[j][2] != 0 && arr[j][1] == 0)//一个零在中间
					{
						if (arr[j][0] == arr[j][2])
						{
							arr[j][2] = arr[j][2] + arr[j][0];
							arr[j][0] = 0;
						}
						else//不等
						{
							arr[j][1] = arr[j][0];
							arr[j][0] = 0;
						}

					}
					if (arr[j][1] != 0 && arr[j][2] != 0 && arr[j][0] == 0)//一个零在上面
					{
						if (arr[j][1] == arr[j][2])//相等
						{
							arr[j][2] = arr[j][1] + arr[j][2];
							arr[j][1] = 0;
						}
					}//下面不为零不改变
					if (arr[j][1] != 0 && arr[j][2] == 0 && arr[j][0] == 0)//中间不为零
					{
						arr[j][2] = arr[j][1];
						arr[j][1] = 0;
					}
					if (arr[j][0] != 0 && arr[j][1] == 0 && arr[j][2] == 0)//上面不为零
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
					printf("你赢了\n");
					judge = 1;
				}
			}
		}
	}
	if (sum > 6)
		printf("你输了\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("2048\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);



	return 0;
}
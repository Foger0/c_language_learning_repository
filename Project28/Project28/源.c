
#define ROW  10
#define COL  10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}

}
void Player1Move(char board[ROW][COL], int row, int col, int* pa, int* pb)
{
	int x = 0;
	int y = 0;
	printf("玩家*走：>");
	while (1)
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				*pa = x - 1;
				*pb = y - 1;
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("非法输入，请重新输入\n");
		}
	}
}
void Player2Move(char board[ROW][COL], int row, int col, int* pa, int* pb)
{
	int x = 0;
	int y = 0;
	printf("玩家#走：>");
	while (1)
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				*pa = x - 1;
				*pb = y - 1;
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("非法输入，请重新输入\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col, int* pa, int* pb)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			*pa = x - 1;
			*pb = y - 1;
			break;
		}
	}
}
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}

		}

	}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col, int a, int b)
{
	//一行上是否相等
	for (int i = 0; i < 5; i++)
	{
		int judge = 1;
		for (int j = 0; j < 5; j++)
		{
			if (board[a][b - i + j] != board[a][b])
			{
				judge = 0;
				break;
			}
		}
		if (judge == 1)
			return board[a][b];
	}
	//一列上是否相等
	for (int i = 0; i < 5; i++)
	{
		int judge = 1;
		for (int j = 0; j < 5; j++)
		{
			if (board[a - i + j][b] != board[a][b])
			{
				judge = 0;
				break;
			}
		}
		if (judge == 1)
			return board[a][b];
	}
	//副对角线
	for (int i = 0; i < 5; i++)
	{
		int judge = 1;
		for (int j = 0; j < 5; j++)
		{
			if (board[a + i - j][b - i + j] != board[a][b])
			{
				judge = 0;
				break;
			}
		}
		if (judge == 1)
			return board[a][b];
	}//主对角线
	for (int i = 0; i < 5; i++)
	{
		int judge = 1;
		for (int j = 0; j < 5; j++)
		{
			if (board[a - i + j][b - i + j] != board[a][b])
			{
				judge = 0;
				break;
			}
		}
		if (judge == 1)
			return board[a][b];
	}
	if (1 == isfull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';

}
void menu()
{
	printf("************************************************\n");
	printf("******************1.play  0.exit****************\n");
	printf("************************************************\n");
}
void game()
{
	int a = 0;
	int b = 0;
	int judge = 0;
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	printf("\n1.人机对战   2.人人对战\n");
	scanf("%d", &judge);
	if (judge == 1)
	{
		while (1)
		{
			Player1Move(board, ROW, COL, &a, &b);
			DisplayBoard(board, ROW, COL);
			ret = Iswin(board, ROW, COL, a, b);
			if (ret != 'C')
			{
				break;
			}
			ComputerMove(board, ROW, COL, &a, &b);
			DisplayBoard(board, ROW, COL);
			ret = Iswin(board, ROW, COL, a, b);
			if (ret != 'C')
			{
				break;
			}
		}

		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
	}
	else if (judge == 2)
	{
		while (1)
		{
			Player1Move(board, ROW, COL, &a, &b);
			DisplayBoard(board, ROW, COL);
			ret = Iswin(board, ROW, COL, a, b);
			if (ret != 'C')
			{
				break;
			}
			Player2Move(board, ROW, COL, &a, &b);
			DisplayBoard(board, ROW, COL);
			ret = Iswin(board, ROW, COL, a, b);
			if (ret != 'C')
			{
				break;
			}
		}

		if (ret == '*')
		{
			printf("玩家1赢\n");
		}
		else if (ret == '#')
		{
			printf("玩家2赢\n");
		}
		else
		{
			printf("平局\n");
		}
	}

}
void test()
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
			game();
			printf("五子棋\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

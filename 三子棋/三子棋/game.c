#define _CRT_SECURE_NO_WARNINGS 1
//游戏的实现
 #include"game1.h"
//初始化棋盘
void initboard(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
		    if (j < col - 1)
		   {
               printf("|");
		   }
		   

	    }
		printf("\n");
		if (i<row-1)
		{
			for (int k = 0; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
				{
					printf("|");
				}

			}
			printf("\n");
		}
	}
	}

void player(char board[ROW][COL], int row, int col)//玩家下棋
{
	while (1) {
int a, b=0;
	printf("请玩家输入棋子所放位置坐标：");
	scanf("%d %d", &a, &b);
	if (a >= 1 && a <= row && b >= 1 && col >= b)
	{
		if (board[a - 1][b - 1] == ' ')
		{
			board[a - 1][b - 1] = '*';
			break;
		}

		else
			printf("该位置已被下过，请重新选择\n");
	}
	else
		printf("坐标非法，请重新输入\n");
	
}
	
}
void computer(char board[ROW][COL], int row, int col)
{
	printf("电脑走：\n");
	
	while (1)
	{int a = rand()%row;
	int b = rand()%col;
	if (board[a][b] == ' ')
	{
		board[a][b] = '#';
		break;
	}

	}
	}
//判断是否平局
int  isfull(char board[ROW][COL], int row, int col)
{
for (int i = 0; i < row; i++)
{
	for (int j = 0; j < col; j++)
	{
		if (board[i][j] != ' ')
			return 0;

	}
}
return 1;
}

//判断比赛进程
char ifwin(char board[ROW][COL], int row, int col)
{//每行
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] &&board[i][1]==board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//每列
	for (int i = 0; i <col; i++)
	{
		if (board[0][i] == board[1][i]&& board[1][i] == board[2][i] &&board[0][i]!= ' ')
			return board[0][i];
	}
	//对角线
	if (board[0][0] == board[1][1] &&board[1][1] == board[2][2]&& board[1][1] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1]&& board[1][1] == board[2][0]&& board[1][1]  != ' ')
		return board[2][0];
	//平局 
	int ret=isfull(board, row, col);
	if (ret == 1)
		return 'Q';
	return 'C';
	
}
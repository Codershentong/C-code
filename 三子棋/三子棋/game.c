#define _CRT_SECURE_NO_WARNINGS 1
//��Ϸ��ʵ��
 #include"game1.h"
//��ʼ������
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

void player(char board[ROW][COL], int row, int col)//�������
{
	while (1) {
int a, b=0;
	printf("�����������������λ�����꣺");
	scanf("%d %d", &a, &b);
	if (a >= 1 && a <= row && b >= 1 && col >= b)
	{
		if (board[a - 1][b - 1] == ' ')
		{
			board[a - 1][b - 1] = '*';
			break;
		}

		else
			printf("��λ���ѱ��¹���������ѡ��\n");
	}
	else
		printf("����Ƿ�������������\n");
	
}
	
}
void computer(char board[ROW][COL], int row, int col)
{
	printf("�����ߣ�\n");
	
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
//�ж��Ƿ�ƽ��
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

//�жϱ�������
char ifwin(char board[ROW][COL], int row, int col)
{//ÿ��
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] &&board[i][1]==board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//ÿ��
	for (int i = 0; i <col; i++)
	{
		if (board[0][i] == board[1][i]&& board[1][i] == board[2][i] &&board[0][i]!= ' ')
			return board[0][i];
	}
	//�Խ���
	if (board[0][0] == board[1][1] &&board[1][1] == board[2][2]&& board[1][1] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1]&& board[1][1] == board[2][0]&& board[1][1]  != ' ')
		return board[2][0];
	//ƽ�� 
	int ret=isfull(board, row, col);
	if (ret == 1)
		return 'Q';
	return 'C';
	
}
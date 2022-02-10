#define _CRT_SECURE_NO_WARNINGS 1

#include"game1.h"
void menu()
{
	printf("**********三子棋游戏**********\n");
	printf("0.结束游戏\n");
	printf("1.开始游戏\n");
	
}
void game()
{
	
	char board[ROW][COL];//二维数组，用于存储棋盘上棋子的数据
	initboard(board, ROW, COL);//初始化棋盘为空格
	printboard(board, ROW, COL);//打印棋盘
	//玩家开始下棋
	char ret=0;
	while (1)
	{//玩家开始下棋
		player(board, ROW, COL);
		printboard(board, ROW, COL);	
		 ret = ifwin(board, ROW, COL);
		if (ret != 'C')
			break;
		 //电脑开始下棋
		computer(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = ifwin(board, ROW, COL);
		if (ret != 'C')
			break;
	} 
	if (ret == '*')
		printf("玩家胜\n");
	else if (ret == '#')
		printf("电脑胜\n");
	else 
		printf("平局\n");
	}
   
	



int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
			switch (input)
			{case 0:printf("宝，游戏结束\n");
				break;
			case 1:printf("开始游戏\n");
				game();
				break;
			default:printf("输入错误，请重新输入\n");
				break;

      		}
			printf("\n");
	} while (input);
}
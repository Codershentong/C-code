#define _CRT_SECURE_NO_WARNINGS 1

#include"game1.h"
void menu()
{
	printf("**********��������Ϸ**********\n");
	printf("0.������Ϸ\n");
	printf("1.��ʼ��Ϸ\n");
	
}
void game()
{
	
	char board[ROW][COL];//��ά���飬���ڴ洢���������ӵ�����
	initboard(board, ROW, COL);//��ʼ������Ϊ�ո�
	printboard(board, ROW, COL);//��ӡ����
	//��ҿ�ʼ����
	char ret=0;
	while (1)
	{//��ҿ�ʼ����
		player(board, ROW, COL);
		printboard(board, ROW, COL);	
		 ret = ifwin(board, ROW, COL);
		if (ret != 'C')
			break;
		 //���Կ�ʼ����
		computer(board, ROW, COL);
		printboard(board, ROW, COL);
		ret = ifwin(board, ROW, COL);
		if (ret != 'C')
			break;
	} 
	if (ret == '*')
		printf("���ʤ\n");
	else if (ret == '#')
		printf("����ʤ\n");
	else 
		printf("ƽ��\n");
	}
   
	



int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
			switch (input)
			{case 0:printf("������Ϸ����\n");
				break;
			case 1:printf("��ʼ��Ϸ\n");
				game();
				break;
			default:printf("�����������������\n");
				break;

      		}
			printf("\n");
	} while (input);
}
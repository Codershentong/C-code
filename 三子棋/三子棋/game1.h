#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>	
#include<stdlib.h>
#include<time.h>
//函数的声明
void initboard(char board[ROW][COL], int row, int col);//初始化棋盘

void printboard(char board[ROW][COL],int row,int col);//打印棋盘

void player(char board[ROW][COL],int row,int col);//玩家下棋

void computer(char board[ROW][COL],int row,int col);//电脑下棋

char ifwin(char board[ROW][COL], int row, int col);//判断比赛进程

int  isfull(char board[ROW][COL], int row, int col);
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>	
#include<stdlib.h>
#include<time.h>
//����������
void initboard(char board[ROW][COL], int row, int col);//��ʼ������

void printboard(char board[ROW][COL],int row,int col);//��ӡ����

void player(char board[ROW][COL],int row,int col);//�������

void computer(char board[ROW][COL],int row,int col);//��������

char ifwin(char board[ROW][COL], int row, int col);//�жϱ�������

int  isfull(char board[ROW][COL], int row, int col);
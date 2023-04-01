#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
#define ROW 3
#define COL 3

//��������

//��ʼ������Ϊ�ո�
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char borad[ROW][COL], int row, int col);

//������� ����Ϊ*
void PlayerMove(char board[ROW][COL], int row, int col);

//�������� ����Ϊ#
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж������Ƿ��� ������1 ��������0
int IsFull(char board[ROW][COL], int row, int col);

//�ж���Ӯ�����Ӯ����*������Ӯ����#��ƽ�ַ���Q����������C
char IsWin(char board[ROW][COL], int row, int col);

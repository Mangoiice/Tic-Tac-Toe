#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//变量定义
#define ROW 3
#define COL 3

//函数声明

//初始化棋盘为空格
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char borad[ROW][COL], int row, int col);

//玩家下棋 符号为*
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋 符号为#
void ComputerMove(char board[ROW][COL], int row, int col);

//判断棋盘是否满 满返回1 不满返回0
int IsFull(char board[ROW][COL], int row, int col);

//判断输赢，玩家赢返回*，电脑赢返回#，平局返回Q，继续返回C
char IsWin(char board[ROW][COL], int row, int col);

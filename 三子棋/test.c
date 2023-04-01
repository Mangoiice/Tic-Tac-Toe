#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("*******       1.play      ********\n");
	printf("**********************************\n");
	printf("*******       0.exit      ********\n");
	printf("**********************************\n");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0; //接收游戏状态
	while (1) {
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢了\n");
	}
	else if (ret == '#') {
		printf("电脑赢了\n");
	}
	else {
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}








int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进行三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入有误，请重新输入");
			break;
		}
	} while (input);
}
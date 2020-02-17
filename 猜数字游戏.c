#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("===================\n");
	printf("===================\n");
	printf("1.开始游戏\n");
	printf("2.退出游戏\n");
	printf("===================\n");
	printf("===================\n");

}

void Game()
{
	int randnum = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:\n");
		scanf("%d", &input);
		if (input > randnum)
		{
			printf("猜大了\n");
		}
		else if (input < randnum)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜回答正确\n");
			break;
		}
	}
}

int main1()
{
	int input = 0;
	menu();
	printf("请输入你的选择\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		Game();
		break;
	case 0:
		printf("欢迎下次再来！\n");
		break;
	default:
		printf("选择错误，请重新输入\n");
		break;
	}
	return 0;
}
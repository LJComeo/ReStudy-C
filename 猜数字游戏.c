#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("===================\n");
	printf("===================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.�˳���Ϸ\n");
	printf("===================\n");
	printf("===================\n");

}

void Game()
{
	int randnum = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("������µ�����>:\n");
		scanf("%d", &input);
		if (input > randnum)
		{
			printf("�´���\n");
		}
		else if (input < randnum)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�ش���ȷ\n");
			break;
		}
	}
}

int main1()
{
	int input = 0;
	menu();
	printf("���������ѡ��\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		Game();
		break;
	case 0:
		printf("��ӭ�´�������\n");
		break;
	default:
		printf("ѡ���������������\n");
		break;
	}
	return 0;
}
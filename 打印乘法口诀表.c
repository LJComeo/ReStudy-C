#include <stdio.h>
#include <stdlib.h>

int main3()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)//ÿһ�е���ʽ�ĸ������ܴ����к�
		{
			printf("%d*%d=%d ", j, i, j*i);
		}
		printf("\n");
	}
	return 0;
}
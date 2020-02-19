#include <stdio.h>
#include <stdlib.h>

int main3()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)//每一行的算式的个数不能大于行号
		{
			printf("%d*%d=%d ", j, i, j*i);
		}
		printf("\n");
	}
	return 0;
}
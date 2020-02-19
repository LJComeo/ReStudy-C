#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Judge(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main2()
{
	for (int i = 100; i < 200; i++)
	{
		if (Judge(i))
		{
			printf("%d ", i);
		}
	}


	return 0;
}
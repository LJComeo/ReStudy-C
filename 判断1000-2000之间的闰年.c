#include <stdio.h>
#include <stdlib.h>

int JudgeYear(int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		return 1;
	}
	return 0;
}


int main()
{
	for (int i = 1000; i <= 2000; i++)
	{
		if (JudgeYear(i))
		{
			printf("%d ", i);
		}
	}


	return 0;
}
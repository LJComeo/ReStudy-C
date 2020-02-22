#include <iostream>
#include <cstdio>
using namespace std;


int main3()
{
	int flag = -1;
	double tmp = 0;
	double cur = 0;
	for (int i = 1; i <= 100; i++)
	{
		cur = 1.0 / i;
		if (i % 2 == 0)
		{
			cur *= flag;
		}
		tmp += cur;
	}
	printf("%f\n", tmp);
	return 0;
}
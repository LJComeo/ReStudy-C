#include <iostream>
using namespace std;


int main4()
{
	int num = 0;
	for (size_t i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			num++;
		}
	}
	cout << num << endl;


	return 0;
}
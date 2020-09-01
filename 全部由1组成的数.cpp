#include <iostream>
using namespace std;

int Getnum(long n)
{
	int count = 1;
	while (n / 10)
	{
		n /= 10;
		count++;
	}
	return count;
}

int main()
{
	long arr[18] = { 0 };
	arr[0] = 1;
	for (int i = 1; i < 18; i++)
	{
		arr[i] = arr[i - 1] * 10 + 1;
	}
	long n;
	while (cin >> n)
	{
		int i = 0;
		for (; i < 18; i++)
		{
			if (arr[i] % n == 0)
				break;
		}
		cout << Getnum(arr[i]) << endl;
	}
	return 0;
}
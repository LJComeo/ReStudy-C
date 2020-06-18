#include <iostream>
using namespace std;

bool Judge(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
		return true;
	return false;
}

int Countnum(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (Judge(i))
			count++;
	}
	return count;
}

int main1()
{
	int n;
	while (cin >> n)
	{
		cout << Countnum(n) << endl;
	}
	return 0;
}
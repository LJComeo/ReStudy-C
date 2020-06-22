#include <iostream>
using namespace std;

int getnum(int n)
{
	if (n == 3 || n == 2)
		return 1;
	return (n / 3) + getnum((n / 3) + (n % 3));
}

int main1()
{
	int n;
	while (cin >> n)
	{
		cout << getnum(n) << endl;
	}

	return 0;
}
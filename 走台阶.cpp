#include <iostream>
using namespace std;

int GetFloorNum(int n, int m)
{
	if (n == m)
		return 1 << (n - 1);
	else
		return GetFloorNum(m, m);
}

int main3()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << GetFloorNum(n, m) % 1000000007 << endl;
	}

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int GetLittleno(int a, int b)
{
	if (b > a)
		swap(a, b);//保证a为a，b中较大的数
	if (a % b == 0)
		return a;
	int n = a * b;
	for (int i = a; i <= n; i++)
	{
		if (i % a == 0 && i % b == 0)
			return i;
	}
}

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << GetLittleno(a, b) << endl;
	}

	return 0;
}
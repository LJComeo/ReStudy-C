#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Count(int num)
{
	int count = 0;
	while (num)
	{
		count += (num % 10);
		num /= 10;
	}
	return count;
}


int main3()
{
	int T,n;
	cin >> T;
	while (T--)
	{
		cin >> n;
		int tmp = 0;
		int cur = 0;
		int count = 0;
		for (int i = 1; i < n;i++)
		{
			tmp = n - i;
			cur = n - tmp;
			count = max(count, Count(tmp) + Count(cur));
		}
		cout << count << endl;
	}

	return 0;
}
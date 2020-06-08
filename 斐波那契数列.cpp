#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main1()
{
	int arr[33];
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i < 33; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int n;
	while (cin >> n)
	{
		int cur = abs(n - arr[1]);
		for (int i = 2; i < 33; i++)
		{
			if (abs(n - arr[i]) < cur)
				cur = abs(n - arr[i]);
		}
		cout << cur;
	}
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[1000][1000];
	for (int i = 0; i < 1000; i++)
	{
		arr[i][0] = 1;
		arr[0][i] = 1;
	}

	for (int i = 1; i < 1000; i++)
	{
		for (int j = 1; j < 1000; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	int m, n;
	while (cin >> m >> n)
	{
		cout << arr[m][n] << endl;
	}

	return 0;
}
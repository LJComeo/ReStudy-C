#include <iostream>
#include <vector>
using namespace std;

int main1()
{
	int n;
	while (cin >> n)
	{
		vector<vector<int>> vv(n + 1, vector<int>(2 * n + 1, 0));
		vv[1][n] = 1;
		for (int i = 2; i < n+1; i++)
		{
			for (int j = 0; j < 2 * n + 1; j++)
			{
				if (j == (n - i + 1) || j == (n + i - 1))
					vv[i][j] = 1;
				else if (j == 0 || j == 2 * n)
					vv[i][j] = 0;
				else
					vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j] + vv[i - 1][j + 1];
			}
		}
		int tmp = 0;
		for (int i = 0; i < vv[n].size(); i++)
		{
			if (vv[n][i] > 0 && vv[n][i] % 2 == 0)
			{
				tmp = i;
				break;
			}
		}
		if (tmp == 0)
			cout << -1 << endl;
		else
			cout << tmp << endl;
	}
	return 0;
}
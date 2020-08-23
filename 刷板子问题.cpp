#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n, mg;
	while (cin >> n)
	{
		vector<int> v;
		int Maxnum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> mg;
			
			v.push_back(mg);
			Maxnum = max(Maxnum, mg);
		}
		vector<vector<int>> vvi(Maxnum,vector<int>(n));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < v[i]; j++)
			{
				vvi[j][i] = 1;
			}
		}
		int count = 1;
		bool flag = true;
		for (int i = 0; i < Maxnum; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (flag && vvi[i][j] == 0)
				{
					count++;
					flag = false;
				}
			}
			count++;
		}

		for (int i = 0; i < Maxnum; i++)
		{
			if (vvi[i][n - 1] == 0)
				count--;
		}
		cout << count << endl;

	}

	return 0;
}
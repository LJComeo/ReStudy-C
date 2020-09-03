#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;
	vector<int> va;
	vector<int> vb;
	vector<int> vret;
	for (int k = 0; k < T; k++)
	{
		int n, m, a, b;
		cin >> n >> m;
		vret.resize(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			va.push_back(a);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b;
			vb.push_back(b);
		}
		sort(va.begin(), va.end());
		sort(vb.begin(), vb.end());

		int i = 0, j = 0;
		for (; i < n && j < m; j++)
		{
			if (vb[j] < va[i])
				continue;
			else
			{
				vret[i] = j + 1;
				i++;
			}
		}

		while (i < n)
		{
			vret[i] = -1;
			i++;
		}

		for (int i = 0; i < n; i++)
		{
			cout << vret[i] << ' ';
		}
		cout << endl;
		vret.clear();
		va.clear();
		vb.clear();
	}
	return 0;
}
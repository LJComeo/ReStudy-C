#include <iostream>
#include <vector>
using namespace std;

bool Judge(vector<vector<int>> vtmp, int x, int y)
{
	if (vtmp[x].size() == 0)
		return false;
	
	int i = 0;
	int tmp = 0;
	for (; i < vtmp[x].size(); i++)
	{
		tmp = vtmp[x][i];
		if (tmp == y)
			return true;
	}
	if (x == vtmp.size() - 1)
		return false;
	return Judge(vtmp, tmp, y);
}

int main()
{
	int n, m, q, u, v, x, y;
	while (cin >> n >> m >> q)
	{
		vector<vector<int>> vtmp(n + 1);
		for (int i = 0; i < m; i++)
		{
			cin >> u >> v;
			vtmp[u].push_back(v);
			vtmp[v].push_back(u);
		}
		for (int i = 0; i < q; i++)
		{
			cin >> x >> y;
			if (Judge(vtmp, x, y))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}

	return 0;
}
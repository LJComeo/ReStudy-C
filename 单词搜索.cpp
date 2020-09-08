#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool dfs(vector<vector<char>> vc, int x, int y, string s)
{
	bool flag = false;
	int a = 0;
	int count = 0;
	for (int i = y; i < vc[0].size(); i++)
	{
		if (vc[x][i] != s[a])
			break;
		else
			count++;
	}
	if (count == s.size())
		flag = true;

	count = 0;
	for (int i = x; i < vc.size(); i++)
	{
		if (vc[i][y] != s[a])
			break;
		else
			count++;
	}
	if (count == s.size())
		flag = true;

	count = 0;
	for (int i = y; i >= 0; i--)
	{
		if (vc[x][i] != s[a])
			break;
		else
			count++;
	}
	if (count == s.size())
		flag = true;

	count = 0;
	for (int i = x; i >= 0; i--)
	{
		if (vc[i][y] != s[a])
			break;
		else
			count++;
	}
	if (count == s.size())
		flag = true;

	if (flag)
		return true;
}

int main2()
{
	string s;
	vector<vector<char>> vc = { { 'A', 'B', 'C', 'E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
	int m, n;
	while (getline(cin, s))
	{
		n = vc.size();
		m = vc[0].size();
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (vc[i][j] == s[0])
				{
					if (dfs(vc, i, j, s))
						flag = true;
					else
						continue;
				}
			}
		}
		if (flag)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	return 0;
}
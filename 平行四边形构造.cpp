#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main1()
{
	int n, m;
	while (cin >> n)
	{
		vector<int> v;
		map<int, int> msi;
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			v.push_back(m);
			msi[m]++;
		}
		int l1 = 0, l2 = 0;
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++)
		{
			if (msi[v[i]] == 2 && !l1)
			{
				l1 = v[i];
				i += msi[v[i]] - 1;
			}
			else if (msi[v[i]] == 2 && !l2)
			{
				l2 = v[i];
			}
			if (l1 && l2)
				break;	
		}
		if (l1 && l2)
			cout << l1 * l2 << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
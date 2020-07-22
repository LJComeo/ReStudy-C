#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main2()
{
	int n, m;
	while (cin >> n)
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			v.push_back(m);
		}
		vector<int> vtmp = v;
		sort(vtmp.begin(), vtmp.end());
		int count = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] != vtmp[i])
				count++;
		}
		cout << count - 1 << endl;
	}
	return 0;
}
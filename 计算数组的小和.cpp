#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,m;
	while (cin >> n)
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> m;
			v.push_back(m);
		}
		vector<int> vtmp;
		vtmp.resize(n, 0);
		for (int i = 0; i < n; i++)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (v[j] <= v[i])
				{
					vtmp[i] += v[j];
				}
			}
		}
		int count = 0;
		for (auto & i : vtmp)
			count += i;
		cout << count << endl;
	}

	return 0;
}
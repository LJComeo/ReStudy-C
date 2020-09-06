#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main4()
{
	int n, a;
	while (cin >> n)
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			v.push_back(a);
		}
		bool flag = true;
		sort(v.begin(), v.end());
		int num_1 = 0;
		for (int i = 0; i < v.size(); i++)
		{
			
			if (v[i] == 2)
			{
				flag = false;
				break;
			}
			else if (v[i] > n)
			{
				flag = false;
				break;
			}
			else if (v[i] == 1)
			{
				num_1++;
				continue;
			}
			else if (num_1 && (v[i] - 1) <= num_1)
			{
				num_1 -= (v[i] - 1);
				continue;
			}
			if (num_1 < 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
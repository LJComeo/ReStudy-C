#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main2()
{
	int n, ai;
	while (cin >> n)
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> ai;
			v.push_back(ai);
		}
		int count = 0;
		while (v[0] != v[v.size() - 1])
		{
			sort(v.begin(), v.end());
			v[0] += 2;
			v[v.size() - 1] -= 2;
			count++;
			if (v[0] > v[v.size() - 1])
			{
				count = -1;
				break;
			}
		}
		cout << count << endl;
		
	}
	return 0;
}
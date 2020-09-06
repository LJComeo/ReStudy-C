#include <iostream>
#include <vector>
using namespace std;

int main3()
{
	int n, a;
	while (cin >> n)
	{
		vector<int> v;
		int k = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			vector<int> vb(n + 1);
			for (int i = 1; i <= n; i++)
			{
				vb[i] = (k % i);
				a ^= vb[i];
			}
			k++;
			v.push_back(a);
		}
		int tmp = v[0];
		for (int i = 1; i < n; i++)
		{
			tmp ^= v[i];
		}
		cout << tmp << endl;
	}

	return 0;
}
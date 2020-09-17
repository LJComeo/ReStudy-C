#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main1()
{
	int n, p, a, b, c;
	while (cin >> n >> p)
	{
		vector<int> va(n+1);
		vector<int> vb(n + 1);
		vector<int> vc(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> a >> b >> c;
			va[i] = a;
			vb[i] = b;
			vc[i] = c;
		}
		//int count = 0;
		vector<int> v(p + 1);
		for (int i = 1; i <= n; i++)
		{
			int num = min(va[i], p / vb[i]);
			for (int k = 1; num > 0; k *= 2)
			{
				k = min(k, num);
				num -= k;
				for (int j = p; j >= vb[i] * k; j--)
				{
					v[j] = max(v[j], v[j - vb[i] * k] + vc[i] * k);
				}
			}

		}
		cout << v[p] << endl;
	}

	return 0;
}
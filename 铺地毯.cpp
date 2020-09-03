#include <iostream>
#include <vector>
using namespace std;

int main1()
{
	int T;
	vector<int> vl;
	vector<int> vr;
	vector<int> ret;
	cin >> T;
	for (int k = 0; k < T; k++)
	{
		int L, n, l, r;
		cin >> L >> n;
		ret.resize(L + 1, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> l >> r;
			vl.push_back(l);
			vr.push_back(r);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = vl[i]; j <= vr[i]; j++)
			{
				ret[j]++;
			}
		}
		for (int i = 1; i < L + 1; i++)
		{
			cout << ret[i] << ' ';
		}
		cout << endl;
		vl.clear();
		vr.clear();
		ret.clear();
	}

	return 0;
}
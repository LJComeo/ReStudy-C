#include <iostream>
#include <vector>
using namespace std;

int main1()
{
	int n, p, q;
	int num_p, num_q;
	while(cin >> n >> p >> q)
	{
		vector<int> ret(n + 1, 0);
		for (int i = 0; i < p; i++)
		{
			cin >> num_p;
			ret[num_p] += 1;
		}
		for (int i = 0; i < q; i++)
		{
			cin >> num_q;
			ret[num_q] += 2;
		}
		int left = 0, mid = 0, right = 0;
		int i = 1;
		for (; i < ret.size(); i++)
		{
			if (ret[i] == 1)
				left++;
			else if (ret[i] == 2)
				right++;
			else if (ret[i] == 3)
				mid++;
		}
		cout << left << ' ' << right << ' ' << mid << endl;

	}

	return 0;
}
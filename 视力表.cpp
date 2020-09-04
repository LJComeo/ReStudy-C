#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main1()
{
	int N, a, b, c, d;
	while (cin >> N >> a >> b >> c >> d)
	{
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);
		sort(v.begin(), v.end());
		int count = 0;
		if (N == 2)
		{
			count = 24;
			if (v[3] >= 2)
				count = count / 2;
			if (v[3] >= 3)
				count = count / 3;
			if (v[3] >= 4)
				count = count / 4;
		}
		cout << count << endl;
	}

	return 0;
}
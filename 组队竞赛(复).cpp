#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main2()
{
	int n, num;
	while (cin >> n)
	{
		vector<int> v;
		for (int i = 0; i < (3 * n); i++)
		{
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		long count = 0;//int¿ÉÄÜ³¬³ö·¶Î§
		for (int i = n; i <= (3 * n - 2); i += 2)
		{
			count += v[i];
		}
		cout << count << endl;
	}
	return 0;
}
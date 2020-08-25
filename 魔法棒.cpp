#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	long long arr[100000] = { 0 };
	for (int i = 2; i <= 100000; i++)
	{
		if (i == 2)
			arr[i] = 1;
		else
			arr[i] = ((i - 1) + arr[i - 1]);
	}
	int n, highnum;
	while (cin >> n)
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> highnum;
			v.push_back(highnum);
		}
		int count = 0;
		sort(v.begin(), v.end());
		
		int k = 1;
		for (int i = 0; i < n; i++)
		{
			count += v[i] - k;
			k++;
		}
		cout << count + arr[n] << endl;
	}
	return 0;
}
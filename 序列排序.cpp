#include <iostream>
#include <vector>
using namespace std;

void QuickSort(vector<int> &v, int left, int right)
{
	if (left < right)
	{
		int a = left, b = right, key = v[a];
		while (a < b)
		{
			while (a < b && v[b] >= key)
				b--;
			if (a < b)
			{
				v[a++] = v[b];
			}
			while (a < b && v[a] < key)
				a++;
			if (a < b)
			{
				v[b--] = v[a];
			}
		}
		v[a] = key;
		for (auto & i : v)
		{
			cout << i << ' ';
		}
		cout << endl;
		QuickSort(v, left, a - 1);
		QuickSort(v, a + 1,right);
	}
}

int main2()
{
	int length, number;
	while (cin >> length)
	{
		vector<int> v;
		for (int i = 0; i < length; i++)
		{
			cin >> number;
			v.push_back(number);
		}
		QuickSort(v, 0, v.size() - 1);
	}

	return 0;
}
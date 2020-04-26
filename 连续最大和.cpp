#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FindMaxSumOfArr(vector<int> &v)
{
	if (v.size() == 0)
		return 0;
	int sum = v[0];
	int Max = v[0];
	for (int i = 1; i < v.size(); i++)
	{
		sum = (sum > 0) ? sum + v[i] : v[i];
		Max = max(Max, sum);
	}
	return Max;
}

int main()
{
	vector<int> cs{ -1, 5, 20, -50, 20 };
	cout << FindMaxSumOfArr(cs);

	return 0;
}
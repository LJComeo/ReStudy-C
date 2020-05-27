#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
	int subarraysDivByK(vector<int>& A, int K) {
		unordered_map<int, int> umii{ { 0, 1 } };//由于子数组中都有0数组，0数组肯定可以整除任何数，并且余数为0，因此初始为1
		int sum = 0;
		for (auto & e : A)
		{
			sum += e;
			int tmp = (sum % K + K) % K;//问了防止负数的情况
			umii[tmp]++;
		}

		int count = 0;
		for (auto  e : umii)
		{
			count += (e.second * (e.second - 1)) / 2;
		}
		return count;
	}
};

int main()
{
	Solution s;
	vector<int> v{ 4, 5, 0, -2, -3, 1 };
	cout << s.subarraysDivByK(v, 5);

	return 0;
}
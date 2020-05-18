#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
由于可能出现负数，导致最大的数字与最小的数字互换，因此每当出现负数时，我们手动的交换最大和最小的数字
然后每次更新最大值就行了
*/


class Solution {
public:
	int maxProduct(vector<int>& nums)
	{
		int Min = 1;
		int Max = 1;
		int ret = INT_MIN;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] < 0)
			{
				int tmp = Min;
				Min = Max;
				Max = tmp;
			}
			Max = max(Max * nums[i], nums[i]);
			Min = min(Min * nums[i], nums[i]);
			ret = max(Max, ret);
		}
		return ret;
	}
};

int main()
{
	Solution s;
	vector<int> v{ 2,3,-2,4 };
	cout << s.maxProduct(v) << endl;

	return 0;
}
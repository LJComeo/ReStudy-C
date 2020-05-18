#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
���ڿ��ܳ��ָ���������������������С�����ֻ��������ÿ�����ָ���ʱ�������ֶ��Ľ���������С������
Ȼ��ÿ�θ������ֵ������
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
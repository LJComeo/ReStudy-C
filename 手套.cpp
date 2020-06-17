#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		int leftnum = 0, rightnum = 0;
		int leftmin = INT_MAX, rightmin = INT_MAX;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (left[i] == 0 || right[i] == 0)
			{
				sum += (left[i] + right[i]);
			}
			else
			{
				leftnum += left[i];
				rightnum += right[i];
				leftmin = min(leftmin, left[i]);
				rightmin = min(rightmin, right[i]);
			}
		}
		return sum + min(leftnum - leftmin + 1, rightnum - rightmin + 1) + 1;
		//需要覆盖每个集合，可以采用将集合的综合计算出来减去最小值，然后+1，即可覆盖集合
		//本体的左右集合，如果有一个颜色手套为0，那么必须把不为0的对应部分也全部取出来，然后再+1即可得到这个值
	}
};


int main2()
{


	return 0;
}
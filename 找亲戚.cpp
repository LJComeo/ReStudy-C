#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
	/**
	* 返回亲7数个数
	* @param digit int整型一维数组 组成亲7数的数字数组
	* @param digitLen int digit数组长度
	* @return int整型
	*/
	int count = 0;
	set<vector<int>> svi;
	void Allfunc(vector<int> digit, int n, int end)
	{
		svi.insert(digit);	
		int i;
		for (i = n; i < end; i++)
		{
			swap(digit[i], digit[n]);
			Allfunc(digit, n + 1, end);
			swap(digit[n], digit[i]);
		}
	}
	int reletive_7(int* digit, int digitLen) {
		vector<int> vc;
		vector<int> vtmp;
		for (int i = 0; i < digitLen; i++)
		{
			vc.push_back(i);
			vtmp.push_back(digit[i]);
		}
		Allfunc(vc, 0, vc.size());
		
		for (auto & e : svi)
		{
			int tmp = 0;
			for (int i = 0; i < vc.size(); i++)
			{
				tmp = tmp * 10 + vtmp[e[i]];
			}
			if (tmp % 7 == 0)
				count++;
		}
		return count;
	}
};


int main()
{
	int digit[3] = { 1, 1, 2 };
	Solution s;
	cout << s.reletive_7(digit, 3);

	return 0;
}
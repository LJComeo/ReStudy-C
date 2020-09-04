#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param arr int整型vector
	* @param k int整型 允许0变为1的个数
	* @return int整型
	*/
	int Getno(vector<int> v)
	{
		int count = 0;
		int Maxno = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == 1)
				count++;
			else
			{
				Maxno = max(Maxno, count);
				count = 0;
			}
		}
		return Maxno;
	}


	int GetNumbers(vector<int> v, vector<int> v_0, int left, int right, int k)
	{
		for (int i = left; i <= right; i++)
		{
			if (v[i] == 0)
				v[i] = 1;
		}
		return Getno(v);
	}


	int GetMaxConsecutiveOnes(vector<int>& arr, int k) {
		vector<int> v_0;
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] == 0)
				v_0.push_back(i);
		}
		int cur = 0;
		for (int i = 0; i <= v_0.size() - k; i++)
		{
			int tmp = GetNumbers(arr, v_0, v_0[i], v_0[k + i - 1], k);

			cur = max(cur, tmp);
		}
		return cur;
	}
};

int main1()
{
	vector<int> v{ 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1 };
	int k = 3;
	Solution s;
	cout << s.GetMaxConsecutiveOnes(v, k) << endl;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param arr int����vector
	* @param k int���� ����0��Ϊ1�ĸ���
	* @return int����
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
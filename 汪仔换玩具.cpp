#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	* �����ܽ�����Ʒ���������
	* @param a int����
	* @param b int����
	* @param c int����
	* @return int����
	*/
	
	int numberofprize(int a, int b, int c) {
		int ret = 0;
		int tmp = min(a, min(b, c));
		int cur = a + b + c;
		a -= tmp; b -= tmp; c -= tmp;
		if (cur <= 3)
			return 0;
		int num_0 = 0;
		if (a == 0)
			num_0++;
		if (b == 0)
			num_0++;
		if (c == 0)
			num_0++;
		ret += tmp;
		vector<int> v;
		v.push_back(a); v.push_back(b); v.push_back(c);
		sort(v.begin(), v.end());
		if (num_0 == 2)
		{
			while(v[0] + v[1] + v[2] >= 4)
			{
				v[0]++; v[1]++; v[2] -= 4;
				ret++;
				v[0] -= 1;
				v[1] -= 1;
				v[2] -= 1;
			}
			
		}
		else if (num_0 == 1 && v[1] == 1)
		{
			while (v[0] + v[1] + v[2] >= 4)
			{
				v[0]++; v[2] -= 2;
				ret++;
				v[0] -= 1;
				v[1] -= 1;
				v[2] -= 1;
			}
			
		}
		else if (num_0 == 1)
		{
			while (v[0] + v[1] + v[2] >= 4)
			{
				v[0]++; v[1]--; v[2]--;
				ret++;
				v[0] -= 1;
				v[1] -= 1;
				v[2] -= 1;
			}
			
		}
		return ret;
	}
};

int main1()
{
	Solution s;
	cout << s.numberofprize(4, 4, 2);
	return 0;
}
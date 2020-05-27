#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
	int subarraysDivByK(vector<int>& A, int K) {
		unordered_map<int, int> umii{ { 0, 1 } };//�����������ж���0���飬0����϶����������κ�������������Ϊ0����˳�ʼΪ1
		int sum = 0;
		for (auto & e : A)
		{
			sum += e;
			int tmp = (sum % K + K) % K;//���˷�ֹ���������
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
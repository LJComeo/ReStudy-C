#include <iostream>
using namespace std;

class Solution {
public:
	/**
	* �ж�N�Ƿ����2��5��7��˵õ���������ԣ�����1�����򷵻�0
	* @param N int���� �˻�
	* @return int����
	*/
	int is_product(int N) {
		if (N < 2)
			return 0;
		if (N % 2 == 0)
			return 1;
		if (N % 5 == 0)
			return 1;
		if (N % 7 == 0)
			return 1;
		return 0;
	}
};


int main()
{
	Solution s;
	cout << s.is_product(12) << endl;

	return 0;
}
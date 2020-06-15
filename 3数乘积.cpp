#include <iostream>
using namespace std;

class Solution {
public:
	/**
	* 判断N是否可由2、5、7相乘得到，如果可以，返回1，否则返回0
	* @param N int整型 乘积
	* @return int整型
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
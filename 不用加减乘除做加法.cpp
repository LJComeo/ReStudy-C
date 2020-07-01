#include <iostream>
using namespace std;

class Solution {
public:
	int Add(int num1, int num2)
	{
		int tmp = 0, cur = 0;
		while (num2)
		{
			tmp = num1 ^ num2;
			cur = (num1 & num2) << 1;
			num1 = tmp;
			num2 = cur;
		}
		return num1;
	}
};

int main1()
{


	return 0;
}
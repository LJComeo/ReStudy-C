#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int num[256] = { 0 };
		for (int i = 0; i < numbers.size(); i++)
		{
			num[numbers[i]]++;
		}
		for (int i = 0; i < numbers.size(); i++)
		{
			if (num[numbers[i]] >(numbers.size() / 2))
			{
				return numbers[i];
			}
		}
		return 0;
	}
};
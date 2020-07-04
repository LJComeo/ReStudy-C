#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	/**
	*	���������е���С������ɺ�
	*	���룺��������arr
	*	���أ����������е���С������ɺ�
	*/
	int getFirstUnFormedNum(vector<int> arr, int len) {
		int max = 0, min = arr[0];
		int i, j;
		for (int i = 0; i < len; i++)
		{
			max += arr[i];
			min = arr[i] < min ? arr[i] : min;
		}
		vector<int> dp(max + 1, 0);
		for (i = 0; i < len; i++)
		{
			for (j = max; j >= arr[i]; j--)
			{
				if (dp[j] < dp[j - arr[i]] + arr[i])
				{
					dp[j] = dp[j - arr[i]] + arr[i];
				}
				else
				{
					dp[j] = dp[j];
				}
			}
		}
		for (i = min; i <= max; i++)
		{
			if (i != dp[i])
			{
				return i;
			}
		}
		return max + 1;

	}
};

int main()
{


	return 0;
}
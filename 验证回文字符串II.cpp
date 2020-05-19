#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
	bool IsRight(string s,int left,int right)
	{
		for (int i = left,j = right; i < j; i++,j--)
		{
			if (s[i] != s[j])
				return false;
		}
		return true;
	}
public:
	bool validPalindrome(string s)
	{
		int left = 0, right = s.size() - 1;
		while (left < right)
		{
			char c1 = s[left], c2 = s[right];
			if (c1 == c2)
			{
				left++; right--;
			}
			else
			{
				return IsRight(s, left + 1, right) || IsRight(s, left, right - 1);
			}
		}
		return true;
	}
};

int main1()
{
	Solution s;
	string str = "abc";
	cout << s.validPalindrome(str) << endl;

	return 0;
}
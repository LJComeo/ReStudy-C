#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


/*
字母异位词指的是由相同的字母但是不同的排列顺序组成的单词，
因此我们首先判断字母的数量是否相同，在数量相同的前提下，
遍历判断单词的每一个字母在排序后是否相同
*/
class Solution {
public:
	bool isAnagram(string s, string t) {
		int n = s.size();
		int m = t.size();
		if (n != m)
			return false;
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		for (int i = 0; i < m; i++)
		{
			if (s[i] != t[i])
				return false;
		}
		return true;
	}
};


int main()
{

	return 0;
}
#include <iostream>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param str string字符串
	* @return int整型
	*/
	int GetFragment(string str)
	{
		if (str.size() == 0)
			return 0;
		int tmp = 1;
		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] != str[i + 1])
				tmp++;
		}

		int cur = str.size() / tmp;
		return cur;
	}
};

int main()
{
	string str = "aaabbaaac";
	Solution s;
	cout << s.GetFragment(str) << endl;

	return 0;
}
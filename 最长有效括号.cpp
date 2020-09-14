#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <string>
#include <algorithm>
using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
int longestValidParenthe(string s)
{
	if (s.size() <= 1)
		return 0;
	int count = 0;
	int tmp = 0;
	int p = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			p++;
			tmp = 0;
		}
		else if (p != 0 && s[i] == ')')
		{
			tmp += 2; p--;
			count = max(tmp, count);
		}
	}
	return count;
}
/******************************结束写代码******************************/


int main1() {
	int res;

	string _s;
	getline(cin, _s);

	res = longestValidParenthe(_s);
	cout << res << endl;

	return 0;

}

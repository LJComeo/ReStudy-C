#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
	int StrToInt(string str)
	{
		int flag = 0;
		long ret = 0;
		if (str[0] == '-')
		{
			flag = 1;
		}
		else if (str[0] == '+')
		{
			flag = 0;
		}
		else if (str[0] >= '0' && str[0] <= '9')
		{
			ret += (str[0] - '0') * pow(10,str.size() - 1);
		}
		else
		{
			return 0;
		}
		for (int i = 1; i < str.size(); i++)
		{	
			if (str[i] >= '0' && str[i] <= '9')
			{
				ret += (str[i] - '0') * pow(10,str.size() - i - 1);
			}
			else
			{
				return 0;
			}
		}
		if (flag)
			ret = 0 - ret;
		return ret;
	}
};

int main()
{
	Solution s;
	string str = "-2147483649";
	cout << s.StrToInt(str) << endl;
	return 0;
}
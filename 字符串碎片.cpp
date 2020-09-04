#include <iostream>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param str string�ַ���
	* @return int����
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
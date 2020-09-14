#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <string>
#include <algorithm>
using namespace std;


/*������������������ʵ����ĿҪ��Ĺ���
��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
******************************��ʼд����******************************/
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
/******************************����д����******************************/


int main1() {
	int res;

	string _s;
	getline(cin, _s);

	res = longestValidParenthe(_s);
	cout << res << endl;

	return 0;

}

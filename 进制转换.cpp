#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main2()
{
	int m, n;
	while (cin >> m >> n)
	{
		string s;
		int tmp, cur;
		int flag = 0;
		if (m < 0)
		{
			flag = 1;
			m = -m;
		}
		while (m / n)
		{
			tmp = m / n;
			cur = m % n;
			if (cur < 10)
				s.push_back('0' + cur);
			else
				s.push_back(cur - 10 + 'A');
			m = tmp;
		}
		cur = m % n;
		s.push_back('0' + cur);
		if (flag)
			cout << '-';
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}
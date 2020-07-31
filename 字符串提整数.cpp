#include <iostream>
#include <string>
using namespace std;

int main4()
{
	string s;
	while (cin >> s)
	{
		long sum = 0;
		bool flag = true;
		if (s[0] == '-')
			flag = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '1' && s[i] <= '9')
				sum = sum * 10 + (s[i] - '0');
		}
		if (!flag)
			sum = -1 * sum;
		cout << sum;
	}
	return 0;
}
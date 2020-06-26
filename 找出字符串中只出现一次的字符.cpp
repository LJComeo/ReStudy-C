#include <iostream>
#include <string>
using namespace std;

int main2()
{
	string s;
	while (cin >> s)
	{
		char str[256] = { 0 };
		bool tmp = false;
		for (int i = 0; i < s.size(); i++)
		{
			str[s[i]]++;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (str[s[i]] == 1)
			{
				cout << s[i] << endl;
				tmp = true;
				break;
			}
		}
		if (tmp == false)
		{
			cout << -1 << endl;
		}
	}
	return 0;
}
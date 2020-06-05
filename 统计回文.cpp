#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool IsRight(string s)
{
	string tmp = s;
	reverse(s.begin(), s.end());
	return s == tmp;
}

int main3()
{
	string a, b;
	while (cin >> a >> b)
	{
		int count = 0;
		for (int i = 0; i <= a.size(); i++)
		{
			string str;
			str = a.substr(0, i) + b + a.substr(i);
			if (IsRight(str))
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
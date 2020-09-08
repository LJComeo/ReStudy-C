#include <iostream>
#include <string>
using namespace std;

int main1()
{
	string s;
	while (getline(cin, s))
	{
		string tmp;
		int pos = 0;
		int i = 0;
		int n = 0;
		while (1)
		{
			bool m = false;
			bool p = false;
			bool q = false;
			bool k = false;
			pos = s.find(' ', i);
			if (pos < 0)
				tmp = s.substr(i);
			else
				tmp = s.substr(i, pos - i);
			for (int j = 0; j < tmp.size(); j++)
			{
				if (tmp[j] >= '0' && tmp[j] <= '9')
					m = true;
				else if (tmp[j] >= 'a' && tmp[j] <= 'z')
					p = true;
				else if (tmp[j] >= 'A' && tmp[j] <= 'Z')
					q = true;
				else
					k = true;
				n++;
			}
			if (m && p && q && k && (n >= 8 && n <= 120))
				cout << 0 << endl;
			else if (n < 8 || n > 120)
				cout << 1 << endl;
			else
				cout << 2 << endl;
			if (pos < 0)
				break;
			else
				i = pos + 1;
			tmp.clear();
			n = 0;
		}

	}
	return 0;
}
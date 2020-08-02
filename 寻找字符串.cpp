#include <iostream>
#include <string>
using namespace std;

int main1()
{
	string s1, s2;
	while (getline(cin, s1))
	{
		int count = 0;
		getline(cin, s2);
		int pos = s1.find(s2[0]);
		while (pos >= 0 && pos < s1.size())
		{
			string tmp = s1.substr(pos, s2.size());
			if (tmp == s2)
				count++;
			pos = s1.find(s2[0],pos+1 );
		}
		cout << count << endl;
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	string tmp;
	string cur;
	int Maxno = 0;
	for (int i = 0; i < s.size(); i++)
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			tmp.push_back(s[i]);
			i++;
		}
		if (Maxno < tmp.size())
		{
			Maxno = tmp.size();
			cur = tmp;
		}
		tmp.clear();
	}
	cout << cur << endl;
	return 0;
}
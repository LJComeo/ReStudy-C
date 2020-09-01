#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main1()
{
	int n;
	string s;
	vector<int> v;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
			v.push_back(s[i] - '0');
	}

	bool flag = true;
	bool tmp = false;
	int cur = 0;
	if (v.size() <= 2)
		flag = false;
	else
	{
		for (int i = 0; i < v.size(); i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (v[j] == v[i])
				{
					cur = i - j;
					tmp = true;
					break;
				}
			}
		}
	}

	if (flag && tmp && (cur >= 3))
		cout << "true" << endl;
	else
		cout << "false" << endl;


	return 0;
}
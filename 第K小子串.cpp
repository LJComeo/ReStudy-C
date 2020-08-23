#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main2()
{
	string s;
	while (getline(cin, s))
	{
		int k;
		cin >> k;
		sort(s.begin(), s.end());
		map<int,string> vs;
		string str;
		int ks = 0;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = i; j < s.size(); j++)
			{
				str.push_back(s[j]);
				vs.insert(pair<int,string>(ks,str));
				ks++;
			}
			str.clear();
		}
		string tmp = vs[k - 1];
		cout << tmp;
	}
	return 0;
}
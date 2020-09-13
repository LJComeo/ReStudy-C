#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main1()
{
	int n;
	string s;
	while (cin >> n)
	{
		cin.ignore();
		getline(cin,s);
		int k = 0;
		string ret;
		if (n < s.size())
		{
			string tmp;
			while (k < s.size())
			{
				tmp = s.substr(k, n);
				reverse(tmp.begin(), tmp.end());
				ret += tmp;
				if (k + n >= s.size())
					break;
				k = k + n;
				tmp.clear();
			}
		}
		else
		{
			ret += s;
			reverse(ret.begin(), ret.end());
		}
		cout << ret << endl;
	}
	
	

	return 0;
}
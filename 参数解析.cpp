#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main2()
{
	string s;
	while (getline(cin,s))
	{
		vector<string> vs;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '"')
			{
				int pos = s.find( '\"',i + 1);
				string tmp = s.substr(i + 1, pos - i - 1);
				vs.push_back(tmp);
				i = pos + 1;
			}
			else
			{
				int flag = s.find(" ",i);
				if (flag < 0)
				{
					string cur = s.substr(i);
					vs.push_back(cur);
					i = s.size();
				}
				else
				{
					string cur = s.substr(i, flag - i);
					vs.push_back(cur);
					i = flag;
				}
				
			}

		}
		cout << vs.size() << endl;
		for (auto & i : vs)
		{
			cout << i << endl;
		}
	}


	return 0;
}
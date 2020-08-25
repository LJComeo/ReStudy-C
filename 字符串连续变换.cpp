#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main1()
{
	string s;
	int n, a, b;
	while (cin >> s)
	{
		vector<int> va;
		vector<int> vb;
		cin >> n;
		int no = n;
		while (no--)
		{
			cin >> a >> b;
			va.push_back(a);
			vb.push_back(b);
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j] == va[i] + 48)
					s[j] = vb[i] + 48;
			}
		}
		cout << s;
	}
	return 0;
}
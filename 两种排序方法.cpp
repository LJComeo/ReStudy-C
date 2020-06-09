#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool CheckDictionaryOrder(vector<string> s)
{
	vector<string> str = s;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++)
	{
		if (str[i] != s[i])
			return false;
	}
	return true;
}

bool CheckLengthOrder(vector<string> s)
{
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i].size() > s[i + 1].size())
			return false;
	}
	return true;
}


int main1()
{
	int n;
	while (cin >> n)
	{
		vector<string> vs;
		string s;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			vs.push_back(s);
		}
		if (CheckDictionaryOrder(vs) && CheckLengthOrder(vs))
			cout << "both" << endl;
		else if (CheckDictionaryOrder(vs) && !CheckLengthOrder(vs))
			cout << "lexicographically" << endl;
		else if (!CheckDictionaryOrder(vs) && CheckLengthOrder(vs))
			cout << "lengths" << endl;
		else
			cout << "none" << endl;
	}
	return 0;
}
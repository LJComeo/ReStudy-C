#include <iostream>
#include <string>
using namespace std;

string ReplaceString(string& str, string s1, string s2)
{
	int pos = str.find(s1[0]);
	while (pos)
	{
		string tmp = str.substr(pos, s1.size());
		if (tmp == s1)
			break;
		pos = str.find(s1[0], pos + 1);
	}
	string cur = str;
	str.resize(str.size() - s1.size() + s2.size());
	for (int i = cur.size() - 1,j = str.size() - 1; i >= pos + s1.size(); i--, j--)
	{
		str[j] = cur[i];
	}
	for (int i = 0,j = pos; i < s2.size(); i++, j++)
	{
		str[j] = s2[i];
	}
	return str;
}

int main()
{
	string str = "abcdefghijklmn";
	string s1 = "efgh";
	string s2 = "abcdefghi";
	cout << ReplaceString(str, s1, s2) << endl;
	return 0;
}
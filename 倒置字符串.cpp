#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	reverse(str.begin(), str.end());
	for (int i = 0; i < str.size();)
	{
		int pos = str.find(" ",i);
		if (pos == -1)
		{
			reverse(str.begin() + i, str.end());
			break;
		}
		else
		{
			reverse(str.begin() + i, str.begin() + pos);
			i = pos + 1;
		}
	}
	cout << str << endl;

	return 0;
}
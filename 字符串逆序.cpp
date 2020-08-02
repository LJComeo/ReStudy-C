#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int a = 0, b = s.size() - 1;
		while (a < b)
		{
			swap(s[a], s[b]);
			a++;
			b--;
		}
		cout << s << endl;
	}

	return 0;
}
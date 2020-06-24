#include <iostream>
#include <string>
using namespace std;


int main1()
{
	string s;
	while (getline(cin, s))
	{
		reverse(s.begin(), s.end());
		cout << s << endl;
	}

	return 0;
}
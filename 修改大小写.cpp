#include <iostream>
#include <string>
using namespace std;

int main2()
{
	string s;
	while (getline(cin, s))
	{
		int num1 = 0, num2 = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				num1++;
			else
				num2++;
		}
		int tmp = 0;
		if (num1 < num2)
			tmp = num2 - num1;
		else
			tmp = num1 - num2;
		cout << tmp / 2 << endl;
	}
	return 0;
}
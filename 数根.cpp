#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	while (cin >> n)
	{
		int tmp = 0;
		char tmp1 = 0;
		while (n.size() > 1)
		{
			for (int i = 0; i < n.size(); i++)
			{
				tmp += (n[i] - '0');
			}
			n.clear();
			while (tmp)
			{
				tmp1 = (tmp % 10) + '0';
				n.push_back(tmp1);
				tmp = tmp / 10;
			}
		}
		cout << n << endl;
	}
	return 0;
}


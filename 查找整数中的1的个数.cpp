#include <iostream>
using namespace std;

int main1()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((n >> i) & 1)
				count++;
		}
		cout << count << endl;
	}

	return 0;
}
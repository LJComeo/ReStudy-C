#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, k;
	while (cin >> a >> b >> c >> d >> e)
	{
		cin >> k;
		int count = 0;
		int tmp = 0;
		while (k>=0)
		{
			if (k >= 100)
			{
				tmp = k - 100;
				e--;
			}
			else if (k >= 50)
			{
				tmp = k - 50;
				d--;
			}
			else if (k >= 10)
			{
				tmp = k - 10;
				c--;
			}
			else if (k >= 5)
			{
				tmp = k - 5;
				b--;
			}
			else if (k >= 1)
			{
				tmp = k - 1;
				a--;
			}
			else
				break;
			count++;
			k = tmp;
		}
		if (count && a >= 0 && b >= 0 && c >= 0 && d >= 0 && e >= 0)
			cout << count << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
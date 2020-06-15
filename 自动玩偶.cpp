#include <iostream>
#include <vector>
using namespace std;

int main2()
{
	int n, f, l;
	cin >> n;
	int x = 0, y = 0;
	int flagx1 = 0, flagy1 = 0, flagx2 = 0, flagy2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> f >> l;
		if (f == 1)
		{
			if (l > 0)
			{
				x += l;
			}
			else
			{
				flagx1++;
			}
		}
		else if (f == 2)
		{
			if (l > 0)
			{
				y += l;
			}
			else
			{
				flagy1++;
			}
		}
		else if (f == -1)
		{
			if (l > 0)
			{
				x -= l;
			}
			else
			{
				flagx2++;
			}
		}
		else if (f == -2)
		{
			if (l > 0)
			{
				y -= l;
			}
			else
			{
				flagy2++;
			}
		}
		if (x < 0 || x > 18 || y < 0 || y > 18)
			break;
	}
	if (x < 0 || x > 18 || y < 0 || y > 18)
		cout << "No" << endl;
	else
	{
		if (flagx1)
		{
			int tmp = 18 - x;
			if (tmp >= flagx1)
				x = 18;
			else
				x += flagx1;
		}
		if (flagy1)
		{
			int tmp = 18 - y;
			if (tmp >= flagy1)
				y = 18;
			else
				y += flagy1;
		}
		if (flagx2)
		{
			int tmp = x - 18;
			if (tmp >= flagx2)
				x = 18;
			else
				x -= flagx2;
		}
		if (flagy2)
		{
			int tmp = y - 18;
			if (tmp >= flagy2)
				y = 18;
			else
				y -= flagy2;
		}
		if (x == 18 && y == 18)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
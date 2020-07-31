#include <iostream>
using namespace std;

int main3()
{
	int x1, x2, x3, x4, y1, y2, y3, y4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		int ret = 0;
		if (x3 >= x1 && x3 <= x2)
		{
			if (y3 >= y1 && y3 <= y2)
				ret = 1;
			else if (y3 <= y2)
				ret = 1;
		}
		else if (x4 >= x1 && x4 <= x2)
		{
			if (y4 >= y1 && y4 <= y2)
				ret = 1;
			else if (y4 >= y1)
				ret = 1;
		}
		else
			ret = 0;
		cout << ret << endl;




	}
	return 0;
}
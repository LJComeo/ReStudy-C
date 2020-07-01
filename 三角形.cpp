#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		vector<double> v = { a, b, c };
		sort(v.begin(), v.end());
		int flag = 0;
		if ((v[0] + v[1]) >v[2])
		{
			flag++;
		}
		if ((v[2] - v[1] < v[0]))
		{
			flag++;
		}
		if (flag == 2)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}
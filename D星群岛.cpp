#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T)
	{
		int n, m, k;
		cin >> n >> m >> k;
		int vs, ve, vm;
		vector<int> flag(n + 1, 0);
		for (int i = 0; i < m; i++)
		{
			cin >> vs >> ve >> vm;
			if (vm <= k)
			{
				flag[vs]++;
				flag[ve]++;
			}
		}
		bool a = true;
		for (int i = 1; i < flag.size(); i++)
		{
			if (flag[i])
				continue;
			else
				a = false;
		}
		if (a)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		T--;
	}

	return 0;
}
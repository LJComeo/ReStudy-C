#include <iostream>
#include <vector>
using namespace std;

class UnionFindSet
{
	vector<int> _a;
public:
	UnionFindSet(int N)
	{
		_a.resize(N, -1);
	}

	int FindRoot(int x)
	{
		int tmp = 0;
		while (_a[x] >= 0)
		{
			tmp = _a[x];
			x = tmp;
		}
		return tmp;
	}

	void Union(int x1, int x2)
	{
		int root1 = FindRoot(x1);
		int root2 = FindRoot(x2);

		if (root1 != root2)
		{
			_a[root1] += _a[root2];
			_a[root2] = root1;
		}
	}
};

int main()
{


	return 0;
}
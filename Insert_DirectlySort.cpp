#include <iostream>
#include <vector>
using namespace std;

void Insert_DirectlySort(vector<int> &v)
{
	int tmp, i, j;
	for (i = 1; i < v.size(); i++)
	{
		tmp = v[i];
		for (j = i; j > 0 && v[j - 1] > tmp; j--)
		{
			v[j] = v[j - 1];
		}
		v[j] = tmp;
	}
}

int main()
{

	return 0;
}
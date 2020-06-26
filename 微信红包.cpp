#include <iostream>
#include <vector>
using namespace std;

class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		int num[100000] = { 0 };
		for (int i = 0; i < n; i++)
		{
			num[gifts[i]]++;
		}
		for (int i = 0; i < n; i++)
		{
			if (num[gifts[i]] >(n / 2))
			{
				return gifts[i];
			}
		}
		return 0;
	}
};

int main3()
{
	Gift g;
	vector<int> v{ 1, 3, 2, 2, 3, 2, 2 };
	cout << g.getValue(v, v.size()) << endl;

	return 0;
}
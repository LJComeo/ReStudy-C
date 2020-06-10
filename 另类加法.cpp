#include <iostream>
using namespace std;

class UnusualAdd {
public:
	int addAB(int A, int B)
	{
		int cur = 0, tmp = 0;
		while (B)
		{
			tmp = A ^ B;
			cur = (A & B) << 1;
			A = tmp;
			B = cur;
		}
		return A;
	}
};

int main2()
{
	UnusualAdd a;
	cout << a.addAB(8,10) << endl;

	return 0;
}
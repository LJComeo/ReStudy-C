#include <iostream>
using namespace std;

int main1()
{
	long A_B, B_C, AB, BC;
	cin >> A_B >> B_C >> AB >> BC;
	long A = (A_B + AB) / 2;
	long B1 = (B_C + BC) / 2;
	long B2 = (AB - A_B) / 2;
	long C = (BC - B_C) / 2;
	if (B1 != B2)
	{
		cout << "No" << endl;
		return 0;
	}
	cout << A << ' ' << B1 << ' ' << C << endl;
	return 0;
}
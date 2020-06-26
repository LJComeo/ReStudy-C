#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
	if (a%b == 0) {
		return b;
	}
	return gcd(b, a%b);
}

int main1()
{
	int n, a;
	while (cin >> n >> a)
	{
		int num;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			if (num <= a)
				a += num;
			else
			{
				a += gcd(a, num);
			}
		}
		cout << a << endl;
	}

	return 0;
}
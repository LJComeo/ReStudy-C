#include <iostream>
using namespace std;
//辗转相除法：如果a%b==0，那么直接返回b，如果非0，就将a = b，b = 非零的余数，继续进行，知道a%b==0，这个时候返回b就是a与b的最大公约数的辗转相除法；
int NumofCon(int a, int b)
{
	int tmp;
	if (a == 1 || b == 1)
	{
		return 1;
	}
	if (a < b)
	{
		swap(a, b);
	}
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		while (a % b != 0)
		{
			tmp = a % b;
			a = b;
			b = tmp;
		}
		return b;
	}
	return 0;
}


int main1()
{
	cout << NumofCon(4, 8) << endl;


	return 0;
}
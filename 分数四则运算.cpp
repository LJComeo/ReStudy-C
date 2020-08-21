#include <iostream>
#include <string>
using namespace std;

int Getgcd(int a, int b)
{
	if (a > b)
		swap(a, b);
	if (b % a == 0)
		return b;
	else
	{
		for (int i = b; i <= a * b; i++)
		{
			if (i % a == 0 && i % b == 0)
				return i;
		}
	}
}

int Maxnum(int a, int b)
{
	if (a > b)
		swap(a, b);
	if (b % a == 0)
		return a;
	else
		return Maxnum(a, b % a);
}

int main()
{
	string s;
	while (getline(cin, s))
	{
		bool flag = true;
		string cur;
		int tmp = 0;
		int count = 0;
		if (s[4] == '+')
		{
			int a = s[2] - '0';
			int a1 = s[0] - '0';
			int b = s[8] - '0';
			int b1 = s[6] - '0';
			if (a == b)
			{
				count = a1 + b1;
				tmp = a;
			}
			else
			{
				tmp = Getgcd(a, b);
				a1 = a1 * (tmp / a);
				b1 = b1 * (tmp / b);
				count = a1 + b1;
			}
			if (count != 0)
			{
				int snum = Maxnum(count, tmp);
				count /= snum;
				tmp /= snum;
			}
		}
		else if (s[4] == '-')
		{
			int a = s[2] - '0';
			int a1 = s[0] - '0';
			int b = s[8] - '0';
			int b1 = s[6] - '0';
			if (a == b)
			{
				count = a1 - b1;
				if (count < 0)
				{
					flag = false;
					count *= -1;
				}
				tmp = a;
			}
			else
			{
				tmp = Getgcd(a, b);
				a1 = a1 * (tmp / a);
				b1 = b1 * (tmp / b);
				count = a1 - b1;
				if (count < 0)
				{
					flag = false;
					count *= -1;
				}
			}
			if (count != 0)
			{
				int snum = Maxnum(count, tmp);
				count /= snum;
				tmp /= snum;
			}
		}
		else if (s[4] == '*')
		{
			int a = s[2] - '0';
			int a1 = s[0] - '0';
			int b = s[8] - '0';
			int b1 = s[6] - '0';
			count = a1 * b1;
			tmp = a * b;
			if (count != 0)
			{
				int snum = Maxnum(count, tmp);
				count /= snum;
				tmp /= snum;
			}
		}
		else
		{
			int a = s[2] - '0';
			int a1 = s[0] - '0';
			int b = s[8] - '0';
			int b1 = s[6] - '0';
			swap(b, b1);
			count = a1 * b1;
			tmp = a * b;
			if (count != 0)
			{
				int snum = Maxnum(count, tmp);
				count /= snum;
				tmp /= snum;
			}
		}
		if (flag == false)
			cur += "-";
		cur += to_string(count);
		cur += "/";
		cur += to_string(tmp);
		cout << cur << endl;
	}
	return 0;
}
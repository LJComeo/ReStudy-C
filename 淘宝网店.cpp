#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool Isprime(int n)
{
	if (n == 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}


int main1()
{
	int year1, month1, day1, year2, month2, day2;
	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		int sum = 0;
		while (year1 < year2)
		{
			if ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0))
				sum += 581;
			else
				sum += 580;
			year1++;
		}
		vector<int> arr(12);
		if ((year2 % 400 == 0) || (year2 % 4 == 0 && year2 % 100 != 0))
		{
			arr = { 62, 29, 31, 60, 31, 60, 31, 62, 60, 62, 31, 62 };
		}
		else
		{
			arr = { 62, 28, 31, 60, 31, 60, 31, 62, 60, 62, 31, 62 };
		}
		if (month1 < month2)
		{
			for (int i = month1; i < month2; i++)
			{
				sum += arr[i - 1];
			}
		}
		else if (month1 > month2)
		{
			for (int i = month1; i >= month2; i--)
			{
				sum -= arr[i - 1];
			}
		}
		if (!Isprime(month2))
		{
			if (day1 > day2)
				sum -= (day1 - day2) * 2;
			else if (day2 > day1)
				sum += (day2 - day1 + 1) * 2;
			else
				sum += 2;
		}
		else
		{
			if (day1 > day2)
				sum -= (day1 - day2);
			else if (day2 > day1)
				sum += (day2 - day1 + 1);
			else
				sum += 1;
		}
		
		cout << sum << endl;
	}

	return 0;
}
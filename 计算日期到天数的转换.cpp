#include <iostream>
using namespace std;

bool Judgeyear(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	return false;
}

int Getdays(int year, int month, int day)
{
	int sum = 0;
	for (int i = 1; i < month; i++)
	{
		if (i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else if (i == 2 && Judgeyear(year))
			sum += 29;
		else if (i == 2 && !Judgeyear(year))
			sum += 28;
		else
			sum += 31;
	}
	sum += day;
	if (sum > 366)
		return -1;
	return sum;
}


int main()
{
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		cout << Getdays(year, month, day) << endl;
	}
	return 0;
}
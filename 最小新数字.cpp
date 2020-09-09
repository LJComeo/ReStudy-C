#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool IsBig(string s, string s1)
{
	if (s.size() > s1.size())
		return true;
	else if (s.size() > s1.size())
		return false;
	long tmp1 = atoi(s.c_str());
	long tmp2 = atoi(s1.c_str());
	if (tmp1 >= tmp2)
		return true;
	else
		return false;
}

int s = 0;
std::string deleteMnumber(std::string num, int k)
{
	if (k == s)
	{
		return num;
	}
	std::string ret = num;
	std::string str = num;
	string::iterator si = ret.begin();
	for (; si !=  ret.end(); si++)
	{
		si = ret.erase(si);
		if (IsBig(str,ret))
			str = ret;
		ret = num;
	}
	s++;
	return deleteMnumber(str, k - 1);
}
int main() {
	std::string str;
	getline(std::cin, str);
	int m;
	std::cin >> m;
	std::cout << deleteMnumber(str, m);
	return 0;
}
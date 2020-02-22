#include <iostream>
#include <vector>
using namespace std;

int main2()
{
	vector<int> v{ 1, 2, 3, 4, 5 };
	vector<int> o{ 6, 7, 8, 9, 0 };

	int n = v.size();
	for (int i = 0; i < n; i++)
	{
		swap(v[i], o[i]);
	}
	cout << "v数组：" << endl;
	for (auto &i : v)
	{
		cout << i << ' ';
	}
	cout << endl;
	cout << "o数组：" << endl;
	for (auto &i : o)
	{
		cout << i << ' ';
	}
	cout << endl;

	return 0;
}
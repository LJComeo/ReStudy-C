#include <iostream>
#include <vector>
using namespace std;

vector<int> Print(vector<vector<int>> &v)
{
	vector<int> ret;
	int n = v.size();
	int m = v[0].size();
	if (m == 0 || n == 0)
	{
		return ret;
	}
	int left = 0, right = m - 1, top = 0, down = n - 1;
	while ((left <= right) && (top <= down))
	{
		for (int i = left; i <= right; i++)
		{
			ret.push_back(v[top][i]);
		}
		if (top < down)//避免这个矩阵只有一行
		{
			for (int i = top + 1; i <= down; i++)
			{
				ret.push_back(v[i][right]);
			}
		}
		if ((top < down) && (left < right))//避免这个矩阵只有一列
		{
			for (int i = right - 1; i >= left; i--)
			{
				ret.push_back(v[down][i]);
			}
		}
		if ((top + 1 < down) && (left < right))//避免这个矩阵只有两行
		{
			for (int i = down - 1; i >= top + 1; i--)
			{
				ret.push_back(v[i][left]);
			}
		}
		left++, right--, top++, down--;
	}
	return ret;

}


int main1()
{
	vector<vector<int>> vs{ { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	vector<int> tmp = Print(vs);
	for (auto & i : tmp)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}
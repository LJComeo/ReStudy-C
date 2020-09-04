#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param matrix int整型vector<vector<>>
	* @return int整型vector
	*/
	vector<int> SpiralMatrix(vector<vector<int> >& matrix)
	{
		vector<int> v;
		if (matrix.size() == 0)
			return v;
		int n = matrix.size();
		int m = matrix[0].size();
		int k = 0;
		int p = 0;
		vector<vector<int>> vflag(n + 1, vector<int>(m + 1));
		while (k < m * n)
		{
			for (int i = p; i < m - p; i++)
			{
				if (vflag[p][i] != -1)
				{
					v.push_back(matrix[p][i]);
					vflag[p][i] = -1;
					k++;
				}
			}

			for (int i = p; i < n - p; i++)
			{
				if (vflag[i][m - p - 1] != -1)
				{
					v.push_back(matrix[i][m - p - 1]);
					vflag[i][m - p - 1] = -1;
					k++;
				}
			}

			for (int i = m - p - 1; i >= p; i--)
			{
				if (vflag[n - p - 1][i] != -1)
				{
					v.push_back(matrix[n - p - 1][i]);
					vflag[n - p - 1][i] = -1;
					k++;
				}
			}

			for (int i = m - p - 1; i >= p; i--)
			{
				if (vflag[i][p] != -1)
				{
					v.push_back(matrix[i][p]);
					vflag[i][p] = -1;
					k++;
				}
			}
		}
		return v;
	}
};

int main2()
{


	return 0;
}
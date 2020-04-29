#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int m = array[0].size() - 1;
		for (int i = 0; i < array.size(); i++)
		{
			if (target > array[i][0] && target < array[i][m])
			{
				int left = 0, right = m;
				int mid = (left + right) / 2;
				while (left < right)
				{
					if (array[i][mid] > target)
						right = mid;
					else if (array[i][mid] < target)
						left = mid + 1;
					else
						return true;
					mid = (left + right) / 2;
				}
				return false;
			}
		}
		return false;
	}
};

int main()
{
	vector<vector<int>> vvs{ { 1, 3, 5 }, { 2, 4, 6 }, { 7, 9, 10 } };
	Solution s;
	cout << s.Find(8, vvs) << endl;

	return 0;
}
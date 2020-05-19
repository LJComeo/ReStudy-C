#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray)
	{
		if (rotateArray.empty())
			return 0;
		int mid = rotateArray.size() / 2;
		int left = 0, right = rotateArray.size() - 1;
		while (left < right)
		{
			if (rotateArray[left] < rotateArray[right])
				return rotateArray[left];

			mid = (left + right) / 2;

			if (rotateArray[left] < rotateArray[mid])//表明左半部分时非递减的
			{
				left = mid + 1;
			}
			else if (rotateArray[right] > rotateArray[mid])//表明右半部分时非递减的
			{
				right = mid;
			}
			else
			{
				left++;
			}
		}
		return rotateArray[left];
	}
};

int main()
{


	return 0;
}

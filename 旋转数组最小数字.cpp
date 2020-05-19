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

			if (rotateArray[left] < rotateArray[mid])//������벿��ʱ�ǵݼ���
			{
				left = mid + 1;
			}
			else if (rotateArray[right] > rotateArray[mid])//�����Ұ벿��ʱ�ǵݼ���
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

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		int leftnum = 0, rightnum = 0;
		int leftmin = INT_MAX, rightmin = INT_MAX;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (left[i] == 0 || right[i] == 0)
			{
				sum += (left[i] + right[i]);
			}
			else
			{
				leftnum += left[i];
				rightnum += right[i];
				leftmin = min(leftmin, left[i]);
				rightmin = min(rightmin, right[i]);
			}
		}
		return sum + min(leftnum - leftmin + 1, rightnum - rightmin + 1) + 1;
		//��Ҫ����ÿ�����ϣ����Բ��ý����ϵ��ۺϼ��������ȥ��Сֵ��Ȼ��+1�����ɸ��Ǽ���
		//��������Ҽ��ϣ������һ����ɫ����Ϊ0����ô����Ѳ�Ϊ0�Ķ�Ӧ����Ҳȫ��ȡ������Ȼ����+1���ɵõ����ֵ
	}
};


int main2()
{


	return 0;
}
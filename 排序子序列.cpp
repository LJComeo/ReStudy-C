#include <iostream>
#include <vector>
using namespace std;


int main1()
{
	int n, number;
	while (cin >> n)
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> number;
			v.push_back(number);
		}
		int count = 1;
		for (int k = 1; k < n - 1; k++)
		{
			if (v[k] > v[k - 1] && v[k] > v[k + 1]
				|| v[k] < v[k - 1] && v[k] < v[k + 1])//��ÿ���ı�ĵ����++
			{
				count++;
				if ((n - 3) != k)//ÿ�����ʣ�µĸ���С��3���򲻻ṹ��һ������
					k++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
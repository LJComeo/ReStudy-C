#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;


/*������������������ʵ����ĿҪ��Ĺ���
��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
******************************��ʼд����******************************/
vector < int > findNumber(int num)
{
	vector<int> v;
	long left = 0;
	long right = 0;
	for (int i = 0; i < 32; i++)
	{
		if (num & (1 << i))
		{
			num ^= (1 << i);
			left = num;
			right = num;
			left ^= (1 << i + 1);
			if (left > 2147483647)
				left = -1;
			right ^= (1 << i - 1);
			if (right < 1)
				right = -1;
			break;
		}
	}
	v.push_back(left);
	v.push_back(right);
	return v;


}
/******************************����д����******************************/


int main2() {
	vector < int > res;

	int _num;
	cin >> _num;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



	res = findNumber(_num);
	for (int res_i = 0; res_i < res.size(); res_i++) {
		cout << res[res_i] << endl;;
	}

	return 0;

}

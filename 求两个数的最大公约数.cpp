#include <iostream>
using namespace std;
//շת����������a%b==0����ôֱ�ӷ���b�������0���ͽ�a = b��b = ������������������У�֪��a%b==0�����ʱ�򷵻�b����a��b�����Լ����շת�������
int NumofCon(int a, int b)
{
	int tmp;
	if (a == 1 || b == 1)
	{
		return 1;
	}
	if (a < b)
	{
		swap(a, b);
	}
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		while (a % b != 0)
		{
			tmp = a % b;
			a = b;
			b = tmp;
		}
		return b;
	}
	return 0;
}


int main1()
{
	cout << NumofCon(4, 8) << endl;


	return 0;
}
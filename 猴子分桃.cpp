#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			cout << (long)pow(5, n) - 4 << " " << (long)pow(4, n) - 4 + n << endl;
			//�Ϻ��ӻ�õ������������+n������Ϊÿ�����Ӷ�����Ϻ���һ�����ӣ�-4����Ϊ���ǽ�������ĸ�����
			//��������������������ǽ�����ĸ�֮�󣬾Ϳ��Է��壬�ֲ����г����Ϳ��Կ������ɣ��������ǽ����4����ȥ������
		}
	}
	return 0;
}
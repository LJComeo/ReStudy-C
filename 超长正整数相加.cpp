#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		int tmp = 0, flag = 0;//flag������ʾÿ����ӵĽ�λ�����tmp��ʾÿ����ӵĽ��
		while (a.size()<b.size())
			a = "0" + a;
		while (a.size()>b.size())
			b = "0" + b;
		for (int i = a.size() - 1; i >= 0; i--)
		{

			tmp = a[i] - '0' + b[i] - '0' + flag;
			a[i] = tmp % 10 + '0';//ÿ�����֮��ÿһ��λ�ϵ��ַ�
			if (tmp / 10)//�������10������Ҫ��λ
				flag = 1;
			else
				flag = 0;
		}
		if (flag)//���Ľ�λ
			a = "1" + a;
		cout << a << endl;
	}
	return 0;
}
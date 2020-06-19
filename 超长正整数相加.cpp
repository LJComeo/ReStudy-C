#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		int tmp = 0, flag = 0;//flag用来表示每次相加的进位情况，tmp表示每次相加的结果
		while (a.size()<b.size())
			a = "0" + a;
		while (a.size()>b.size())
			b = "0" + b;
		for (int i = a.size() - 1; i >= 0; i--)
		{

			tmp = a[i] - '0' + b[i] - '0' + flag;
			a[i] = tmp % 10 + '0';//每次相加之后，每一个位上的字符
			if (tmp / 10)//如果大于10，就需要进位
				flag = 1;
			else
				flag = 0;
		}
		if (flag)//最后的进位
			a = "1" + a;
		cout << a << endl;
	}
	return 0;
}
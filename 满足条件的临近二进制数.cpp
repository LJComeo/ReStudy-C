#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
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
/******************************结束写代码******************************/


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

#include <iostream>
using namespace std;

int main() {
	int n = 0;
	//scanf返回值为正确输入数据的变量个数，当一个变量都没有成功获取数据时，此时返回-1
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		int count = 0;
		while (n > 1) {
			count += 1;
			//每次取1/3,如果不能整除3，有两种情况
			//剩余1个，分成 1/3 、1/3 、1 + (1/3) ，两个1/3放入天平两端，
			//剩余2个，分成 1/3 、1 + (1/3) 、 1 + (1/3)，两个1 + (1/3)放入天平两端
			//由于题目要求最快的时间，并且是求最多的次数，因此取每次剩余的最大值 1 + (1/3)
			n = n / 3 + (n % 3 > 0);
		}
		printf("%d\n", count);
	}
	return 0;
}
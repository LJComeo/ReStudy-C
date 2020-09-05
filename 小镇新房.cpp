#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	* 返回能创建的房屋数
	* @param t int整型 要建的房屋面宽
	* @param xa int整型一维数组 已有房屋的值，其中 x0 a0 x1 a1 x2 a2 ... xi ai 就是所有房屋的坐标和房屋面宽。 其中坐标是有序的（由小到大）
	* @param xaLen int xa数组长度
	* @return int整型
	*/
	int getHouses(int t, int* xa, int xaLen) {
		map<int, int> mi;
		for (int i = 0; i < xaLen - 1; i += 2)
		{
			for (int j = xa[i] - (xa[i + 1] / 2); j <= xa[i] + (xa[i + 1] / 2); j++)
			{
				mi[j] = 1;
			}
		}
		int count = 2;
		int tmp = 0;
		bool flag = true;
		for (int i = mi.begin()->first; i < mi.size(); i++)
		{
			if (mi[i + 1] == 0)
			{
				for (int j = i; j <= i + t; j++)
				{
					if (mi[j] == 1)
					{
						flag = false;
						break;
					}
				}
				if (flag)
				{
					count++;
				}
			}
		}
		return count;
	}
};


int main2()
{


	return 0;
}
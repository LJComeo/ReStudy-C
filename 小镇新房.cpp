#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	* �����ܴ����ķ�����
	* @param t int���� Ҫ���ķ������
	* @param xa int����һά���� ���з��ݵ�ֵ������ x0 a0 x1 a1 x2 a2 ... xi ai �������з��ݵ�����ͷ������ ��������������ģ���С����
	* @param xaLen int xa���鳤��
	* @return int����
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
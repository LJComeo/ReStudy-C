#include <iostream>
#include <vector>
using namespace std;

int main1()
{
	int w, h;
	while (cin >> w >> h)
	{
		vector<vector<int>> vv;
		vv.resize(w);
		for (auto & i : vv)
		{
			i.resize(h, 1);
		}
		//���������������ֵ����ʼ����1
		//����������ÿ����1��λ�ã����ҽ������ߵ�λ����Ϊ0
		int sum = 0;
		for (int i = 0; i < w; i++)
		{
			for (int j = 0; j < h; j++)
			{
				if (vv[i][j] == 1)
				{
					sum++;
					if (i + 2 < w)
						vv[i + 2][j] = 0;//�����ܷŵ���ĸ���ֱ����0
					if (j + 2 < h)
						vv[i][j + 2] = 0;
				}

			}
		}
		cout << sum << endl;
	}
	return 0;
}
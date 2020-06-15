#include <iostream>
#include <vector>
using namespace std;

bool get2018(vector<vector<int>> vvi,int N)
{
	int cur = 0;
	for (int a = 0; a < N; a++)
	{
		for (int b = 0; b < N; b++)
		{
			for (int c = 0; c < N; c++)
			{
				for (int d = 0; d < N; d++)
				{
					for (int e = 0; e < N; e++)
					{
						cur = vvi[0][a] + vvi[1][b] + vvi[2][c] + vvi[3][d] + vvi[4][e];
						if (cur == 2018)
							return true;
					}
				}
			}
		}
	}
	return false;
}


int main1()
{
	int T;
	cin >> T;
	vector<vector<int>> vvi;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		vector<int> tmp;
		for (int k = 0; k < 5; k++)
		{
			int num;
			for (int j = 0; j < N; j++)
			{
				cin >> num;
				tmp.push_back(num);
			}
			vvi.push_back(tmp);
			tmp.clear();
		}
		if (get2018(vvi,N))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		vvi.clear();
	}
	return 0;
}
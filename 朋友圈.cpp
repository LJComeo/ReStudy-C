#include <iostream>
#include <vector>
using namespace std;

class UnionFindSet
{
	vector<int> _a;
public:
	UnionFindSet(int N)
	{
		_a.resize(N, -1);
	}

	int FindRoot(int x)
	{
		int tmp = 0;
		while (_a[x] >= 0)
		{
			tmp = _a[x];
			x = tmp;
		}
		return tmp;
	}

	void Union(int x1, int x2)
	{
		int root1 = FindRoot(x1);
		int root2 = FindRoot(x2);

		if (root1 != root2)
		{
			_a[root1] += _a[root2];
			_a[root2] = root1;
		}
	}

	int SetSize()
	{
		int n = 0;
		for (auto e : _a)
		{
			if (e < 0)//����������ڵ㣬ÿ�����ڵ�ʹ���һ��Ȧ
				++n;
		}
		return n;
	}
};

class Solution {
public:
	int findCircleNum(vector<vector<int>>& M) {
		UnionFindSet ufs(M.size());
		for (int i = 0; i < M.size(); i++)
		{
			for (int j = 0; j < M[i].size(); j++ )
			{
				if (i >= j)
				{
					break;
				}
				if (M[i][j] == 1)//��ֵΪ1ʱ������ȷ��i��j�����ѹ�ϵ��Ȼ����кϲ�
					ufs.Union(i, j);
			}
		}
		return ufs.SetSize();
	}
};

int main()
{

	return 0;
}
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
};

class Solution
{
public:
	bool equationsPossible(vector<string>& equations)
	{
		UnionFindSet ufs(26);
		for (auto & str : equations)
		{
			if (str[1] == '=')
			{
				char ch1 = str[0];
				char ch2 = str[3];

				ufs.Union(ch1 - 'a', ch2 - 'a');//���ʱ��ʽ�Ļ���˵�����Ժϲ�
			}
		}
		for (auto & str : equations)
		{
			if (str[1] == '!')
			{
				char ch1 = str[0];
				char ch2 = str[3];

				int root1 = ufs.FindRoot(ch1 - 'a');
				int root2 = ufs.FindRoot(ch2 - 'a');

				if (root1 == root2)//����ڲ��ǵ�ʽ��ǰ���£��������ַ��ĸ���ֵ��ȣ���ô�͹�����ì�ܣ��򷵻�false
					return false;
			}
		}
		return true;
	}
};

int main()
{


	return 0;
}
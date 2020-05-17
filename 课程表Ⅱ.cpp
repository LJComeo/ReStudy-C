#include <iostream>
#include <vector>
using namespace std;

class Solution {
	vector<vector<int>> tmp;
	vector<int> flag;
	vector<int> ret;
	bool invaild;
public:

	void dfs(int n)
	{
		//���Ƚ���ǰ�ĵ��״̬���Ϊ������
		flag[n] = 1;
		for (auto v : tmp[n])
		{
			if (flag[v] == 0)
			{
				dfs(v);
				if (invaild)
					return;
			}
			else if (flag[v] == 1)
			{
				invaild = true;
				return;
			}
		}
		flag[n] = 2;
		ret.push_back(n);
	}

	vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
	{
		tmp.resize(numCourses);//��ʼ���������ͼ�Ķ�ά����
		flag.resize(numCourses);//��ʼ�����ÿ�����״̬
		for (auto e : prerequisites)
		{
			tmp[e[1]].push_back(e[0]);//��ÿ�ſδ浽���ſε����޿γ̵��±��Ӧ��������
		}
		for (int i = 0; i < numCourses && !invaild; i++)
		{
			if (flag[i] == 0)
				dfs(i);
		}
		if (invaild)
			return{};

		reverse(ret.begin(), ret.end());
		return ret;
	}
};


int main()
{
	Solution s;
	vector<vector<int>> vv{ { 1, 0 }, { 2, 0 }, { 3, 1 }, { 3, 2 } };
	vector<int> tmp = s.findOrder(4, vv);
	for (auto & i : tmp)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}
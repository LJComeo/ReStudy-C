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
		//首先将当前的点的状态标记为搜索中
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
		tmp.resize(numCourses);//初始化存放有向图的二维数组
		flag.resize(numCourses);//初始化存放每个点的状态
		for (auto e : prerequisites)
		{
			tmp[e[1]].push_back(e[0]);//将每门课存到该门课的先修课程的下标对应的数组中
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
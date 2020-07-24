#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV)
	{
		if (pushV.size() == 0 || popV.size() == 0 || pushV.size() != popV.size())
		{
			return false;
		}
		stack<int> st;//¸¨ÖúÕ»
		int i = 0;
		int j = 0;
		for (; i < pushV.size(); i++)
		{
			st.push(pushV[i]);
			while (!st.empty() && st.top() == popV[j])
			{
				st.pop();
				j++;
			}
		}
		return st.empty();
	}
};

int main()
{

	return 0;
}
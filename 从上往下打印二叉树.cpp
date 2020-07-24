#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode * left;
	TreeNode * right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}

};

class Solution
{
public:
	vector<int> PrintFromTopToBottom(TreeNode * root)
	{
		vector<int> res;
		if (root == nullptr)
			return res;
		queue<TreeNode*> qu;
		qu.push(root);
		while (!qu.empty())
		{
			TreeNode * node = qu.front();
			qu.pop();
			res.push_back(node->val);

			if (node->left)
			{
				qu.push(node->left);
			}
			if (node->right)
			{
				qu.push(node->right);
			}

		}
		return res;
	}
};

int main()
{

	return 0;
}
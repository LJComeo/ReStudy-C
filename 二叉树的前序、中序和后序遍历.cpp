#include <iostream>
#include <stack>
#include <vector>
using namespace std;


struct TreeNode
{
	int val;
	TreeNode * left;
	TreeNode * right;
	TreeNode(int x) :val(x), left(nullptr), right(nullptr){}
};

vector<int> PreOrderTree(TreeNode * root)//二叉树的前序遍历
{
	vector<int> vres;
	if (root == nullptr)
		return vres;
	TreeNode * cur = root;
	stack<TreeNode*> st;
	while (cur)
	{
		vres.push_back(cur->val);

		if (cur->right)
			st.push(cur->right);
		if (cur->left)
			cur = cur->left;
		else
		{
			cur = st.top();
			st.pop();
		}
	}
	return vres;
}

vector<int>MidOrderTree(TreeNode * root)//中序遍历
{
	vector<int> vres;
	if (root == nullptr)
		return vres;
	stack<TreeNode *> st;
	TreeNode * cur = root;
	while (cur || !st.empty())
	{
		for (; cur; cur = cur->left)
		{
			st.push(cur);
		}

		cur = st.top();
		vres.push_back(cur->val);
		st.pop();
		cur = cur->right;
	}
	return vres;
}

vector<int>AfterOrderTree(TreeNode * root)//后序遍历
{
	vector<int> vres;
	if (root == nullptr)
		return vres;
	stack<TreeNode *> st;
	int tag[] = { 0 };
	TreeNode * cur = root;
	do{
		for (; cur; cur = cur->left)
		{
			st.push(cur);
			tag[st.size() - 1] = 0;
		}
		while (!st.empty() && tag[st.size() - 1])
		{
			cur = st.top();
			vres.push_back(cur->val);
			st.pop();
		}
		if (!st.empty())
		{
			cur = st.top();
			tag[st.size() - 1] = 1;
			cur = cur->right;
		}
	} while (!st.empty());
	return vres;
}

int main()
{


	return 0;
}
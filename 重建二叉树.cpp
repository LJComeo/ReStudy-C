#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
	{
		int inlen = vin.size();
		if (inlen == 0)
		{
			return NULL;
		}
		vector<int> left_pre, right_pre, left_in, right_in;
		//�������ڵ㣬���ڵ�϶���ǰ������ĵ�һ����
		TreeNode * head = new TreeNode(pre[0]);
		//�ҵ�����������ڵ�����λ�ã�����ڱ���gen��
		int gen = 0;
		for (int i = 0; i < inlen; i++)
		{
			if (vin[i] == pre[0])
			{
				gen = i;
				break;
			}
		}
		//����������������ڵ���ߵĽ��λ�ڶ���������ߣ����ڵ��ұߵĽ��λ�ڶ��������ұ�
		//����������㣬�Զ����������й鲢
		for (int i = 0; i < gen; i++)
		{
			left_in.push_back(vin[i]);
			left_pre.push_back(pre[i + 1]);//ǰ���һ�����

		}
		for (int i = gen + 1; i < inlen; i++)
		{
			right_in.push_back(vin[i]);
			right_pre.push_back(pre[i]);
		}
		//��shell�����˼�����ƣ�ȡ��ǰ�������������ڵ���ߺ��ұߵ�����
		//�ݹ飬�ٶ�������������в��裬������������������������ֱ��Ҷ�ڵ�
		head->left = reConstructBinaryTree(left_pre, left_in);
		head->right = reConstructBinaryTree(right_pre, right_in);
		return head;
	}
};
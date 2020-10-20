#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	void reorderList(ListNode* head)
	{
		if (head == nullptr)
			return;
		vector<ListNode*> v;
		ListNode* tmp = head;
		for (; tmp; tmp = tmp->next)
		{
			v.push_back(tmp);
		}
		int i = 0; int j = v.size() - 1;
		while (i < j)
		{
			v[i]->next = v[j];
			i++;
			if (i == j)
				break;
			v[j]->next = v[i];
			j--;
		}
		v[i]->next = nullptr;
	}
};

int main()
{


	return 0;
}
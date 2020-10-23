#include <iostream>
#include <string>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool isPalindrome(ListNode* head)
	{
		if (head == nullptr)
			return true;
		ListNode * tmp = head;
		string s;
		for (; tmp; tmp = tmp->next)
		{
			s.push_back(tmp->val);
		}
		string cur(s);
		reverse(cur.begin(), cur.end());
		if (cur == s)
			return true;
		else
			return false;
	}
};

int main()
{


	return 0;
}
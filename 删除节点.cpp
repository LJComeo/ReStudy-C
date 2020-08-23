#include <iostream>
#include <vector>
using namespace std;

struct node
{
	int _val;
	node * _next;
	node(int val = 0) :_val(val), _next(nullptr){}
};

node* DeleteK(node * head,int k)
{
	node * tmp = head;
	node * cur = head;
	for (int i = 0; i < k - 2; i++)
	{
		cur = cur->_next;
	}
	tmp = cur->_next;
	cur->_next = tmp->_next;
	tmp->_next = nullptr;
	return head;
}

int main1()
{
	int n, k;
	int val;
	while (cin >> n >> k)
	{
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> val;
			v.push_back(val);
		}
		for (int i = k - 1; i < n - 1; i++)
		{
			v[i] = v[i + 1];
		}
		v.pop_back();
		for (auto & i : v)
		{
			cout << i << ' ';
		}
		cout << endl;
		
		
	}

	return 0;
}
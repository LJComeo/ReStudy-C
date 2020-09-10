#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
using namespace std;

struct list_node{
	int val;
	struct list_node * next;
};


list_node * input_list(void)
{
	int n, val;
	list_node * phead = new list_node();
	list_node * cur_pnode = phead;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &val);
		if (i == 1) {
			cur_pnode->val = val;
			cur_pnode->next = NULL;
		}
		else {
			list_node * new_pnode = new list_node();
			new_pnode->val = val;
			new_pnode->next = NULL;
			cur_pnode->next = new_pnode;
			cur_pnode = new_pnode;
		}
	}
	return phead;
}


list_node * merge_list(list_node * head1, list_node * head2)
{
	list_node * newhead = new list_node();
	list_node * newtmp = newhead;
	list_node * tmp1 = head1;
	list_node * tmp2 = head2;
	while (tmp1 && tmp2)
	{
		list_node * newtmp1 = new list_node();
		if (tmp1->val <= tmp2->val)
		{
			newtmp1->val = tmp1->val;
			tmp1 = tmp1->next;
		}
		else
		{
			newtmp1->val = tmp2->val;
			tmp2 = tmp2->next;

		}
		newtmp->next = newtmp1;
		newtmp = newtmp1;
	}
	while (tmp1)
	{
		list_node * cur = new list_node();
		cur->val = tmp1->val;
		newtmp->next = cur;
		newtmp = newtmp->next;
		tmp1 = tmp1->next;
	}
	while (tmp2)
	{
		list_node * cur = new list_node();
		cur->val = tmp2->val;
		newtmp->next = cur;
		newtmp = newtmp->next;
		tmp2 = tmp2->next;
	}
	return newhead->next;
}


void print_list(list_node * head)
{
	while (head != NULL) {
		printf("%d ", head->val);
		head = head->next;
	}
	puts("");
}


int main1()
{
	list_node * head1 = input_list();
	list_node * head2 = input_list();
	list_node * new_head = merge_list(head1, head2);
	print_list(new_head);
	return 0;
}
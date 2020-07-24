#include <iostream>
#include <stack>
using namespace std;

class Solution
{
	stack<int> data_stack;//Êı¾İÕ»
	stack<int> min_stack;//¸¨ÖúÕ»
public:
	void push(int value)
	{
		if (min_stack.empty() || value < min_stack.top())
		{
			min_stack.push(value);
		}
		else //!min_stack.empty() || value >= min_stack.top()
		{
			min_stack.push(min_stack.top());
		}
		data_stack.push(value);
	}
	void pop()
	{
		data_stack.pop();
		min_stack.pop();
	}
	int top()
	{
		return data_stack.top();
	}
	int min()
	{
		return min_stack.top();
	}
};

int main()
{


	return 0;
}
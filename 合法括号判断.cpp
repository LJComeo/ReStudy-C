#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Parenthesis {
public:
	bool chkParenthesis(string A, int n)
	{
		int left = 0, right = 0;
		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] != '(' && A[i] != ')')
				return false;
			if (A[i] == '(')
				left++;
			else if (A[i] == ')')
				right++;
		}
		return left == right;
	}
};

int main()
{



	return 0;
}
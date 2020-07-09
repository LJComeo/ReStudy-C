#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
	int respace(vector<string>& dictionary, string sentence) {

		int sen_len = sentence.size();
		vector<int> dp(sen_len + 1);

		dp[0] = 0;
		for (int i = 1; i <= sen_len; i++)
		{
			dp[i] = dp[i - 1] + 1;
			for (int j = 0; j<dictionary.size(); j++)
			{
				int len = dictionary[j].size();
				if (len <= i)
				{
					if (sentence.substr(i - len, len) == dictionary[j])
						dp[i] = min(dp[i], dp[i - len]);
				}
			}

		}

		return dp[sen_len];
	}
};

int main()
{



	return 0;
}
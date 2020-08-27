#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
#include <functional>
using namespace std;

class Solution {
public:
	unordered_map<string, priority_queue<string, vector<string>, std::greater<string>>> vec;

	vector<string> stk;

	void dfs(const string& curr) {
		while (vec.count(curr) && vec[curr].size() > 0) {
			string tmp = vec[curr].top();
			vec[curr].pop();
			dfs(move(tmp));
		}
		stk.emplace_back(curr);
	}

	vector<string> findItinerary(vector<vector<string>>& tickets) {
		for (auto& it : tickets) {
			vec[it[0]].emplace(it[1]);
		}
		dfs("JFK");

		reverse(stk.begin(), stk.end());
		return stk;
	}
};

int main()
{
	vector<vector<string>> vvs{ { "JFK", "SFO" }, { "JFK", "ATL" }, { "SFO", "ATL" }, { "ATL", "JFK" }, { "ATL", "SFO" } };
	Solution s;
	vector<string> tmp = s.findItinerary(vvs);
	for (auto & i : tmp)
	{
		cout << i << ',';
	}
	cout << endl;

	return 0;
}
#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
using namespace std;

class LRUCache {
	unordered_map<int, list<pair<int, int>>::iterator> m_list;
	list<pair<int, int>> l_list;
public:
	vector<int> LRU(vector<vector<int> >& operators, int k) {

		vector<int> ret;
		for (int i = 0; i < operators.size(); i++)
		{
			if (operators[i][0] == 1)
			{
				auto ht_it = m_list.find(operators[i][1]);
				if (ht_it == m_list.end())
				{
					if (l_list.size() == k)
					{
						m_list.erase(l_list.back().first);
						l_list.pop_back();
					}
					l_list.push_front(make_pair(operators[i][1], operators[i][2]));
					m_list[operators[i][1]] = l_list.begin();
				}
				else
				{
					l_list.erase(ht_it->second);
					l_list.push_front(make_pair(operators[i][1], operators[i][2]));
					m_list[operators[i][1]] = l_list.begin();
				}
			}
			else
			{
				auto ht_it = m_list.find(operators[i][1]);
				if (ht_it == m_list.end())
				{
					ret.push_back(-1);
				}
				else
				{
					list<pair<int, int>>::iterator it = ht_it->second;
					pair<int, int> k = *(it);
					l_list.erase(it);
					l_list.push_front(k);
					m_list[operators[i][1]] = l_list.begin();
					ret.push_back(k.second);
				}
			}
		}
		return ret;
	}
};

int main()
{


	return 0;
}
#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;


class LRUCache {
	int _capacity;
	unordered_map<int, list<pair<int, int>>::iterator> _ht;
	list<pair<int, int>> _lru_lt;
public:
	LRUCache(int capacity) :_capacity(capacity)
	{}
	int get(int key) {
		auto ht_it = _ht.find(key);//找到这个值
		if (ht_it == _ht.end())
		{
			return -1;
		}
		else
		{
			list<pair<int, int>>::iterator lt_it = ht_it->second;
			pair<int, int> kv = *(lt_it);
			_lru_lt.erase(lt_it);
			_lru_lt.push_front(kv);
			_ht[key] = _lru_lt.begin();
			return kv.second;
		}
	}

	void put(int key, int value) {
		auto ht_it = _ht.find(key);
		if (ht_it == _ht.end())
		{
			if (_lru_lt.size() == _capacity)
			{
				_ht.erase(_lru_lt.back().first);
				_lru_lt.pop_back();
			}

			_lru_lt.push_front(make_pair(key, value));
			_ht[key] = _lru_lt.begin();

		}
		else
		{
			_lru_lt.erase(ht_it->second);
			_lru_lt.push_front(make_pair(key, value));
			_ht[key] = _lru_lt.begin();
		}
	}
};

int main1()
{


	return 0;
}
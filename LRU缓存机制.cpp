#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class LRUCache {
	int m_a;
	unordered_map<int, int> msi;
public:
	LRUCache(int capacity) :m_a(capacity)
	{}

	int get(int key) {
		auto ret = msi.find(key);//�ҵ����ֵ
		if (ret == msi.end())
			return -1;
		else
		{
			int val = msi[key];
			msi.erase(key);
			msi.insert(pair<int, int>(key, val));
			return val;
		}
	}

	void put(int key, int value) {
		auto it = msi.find(key);
		if (it == msi.end())
		{
			if (msi.size() < m_a)
				msi.insert(pair<int, int>(key, value));
			else
			{
				msi.erase(msi[msi.begin()->first]);
				msi.insert(pair<int, int>(key, value));
			}
		}
		else
		{

			msi.erase(key);
			msi.insert(pair<int, int>(key, value));
		}
		
	}
};

int main()
{
	LRUCache *cache = new LRUCache(2);
	cache->put(1, 1);
	cache->put(2, 2);
	cout << cache->get(1) << endl;       // ����  1
	cache->put(3, 3);    // �ò�����ʹ����Կ 2 ����
	cout << cache->get(2) << endl;       // ���� -1 (δ�ҵ�)


	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int bin_search(vector<int> v,int left,int right,int key)
{
	int mid = (left + right) / 2;
	if (v[mid] > key)
		return bin_search(v, left, mid, key);
	else if (v[mid] < key)
		return bin_search(v, mid + 1, right, key);
	else
		return mid;
}

int main1()
{
	vector<int> v{ 1, 2, 3, 4, 5, 6 };
	cout << bin_search(v, 0, v.size() - 1,1) << endl; 


	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int bin_search(int arr[], int left, int right, int key)
{
	int mid = (left + right) / 2;
	if (arr[mid] > key)
	{
		bin_search(arr, left, mid, key);
	}
	else if (arr[mid] < key)
	{
		bin_search(arr, mid + 1, right, key);
	}
	else
	{
		return mid;
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	cout << bin_search(arr, 0, 5, 1);

	return 0;
}
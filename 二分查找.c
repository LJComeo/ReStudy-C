#include <stdio.h>
#include <stdlib.h>

#if 1
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

#elif
int bin_search1(int arr[], int left, int right, int key)
{
	int mid = (left + right) / 2;
	while (left <= right)
	{
		if (arr[mid] > key)
		{
			right = mid;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
}
#endif
int main2()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = 9;
	int ret = bin_search(arr, left, right, 5);
	printf("%d\n", ret);


	return 0;
}
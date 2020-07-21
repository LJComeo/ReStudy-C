#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

void partSort(int* arr, int left, int right)
{
	if (left < right)
	{
		int begin = left;
		int end = right;
		int temp = arr[end];  //三数取中

		while (begin != end)
		{
			while (begin < end&&arr[begin] <= temp)
				begin++;
			if (begin < end)
				arr[end] = arr[begin];  //begin成为新坑 
			while (begin < end&&arr[end] >= temp)
				end--;
			if (begin < end)
				arr[begin] = arr[end];
		}
		arr[begin] = temp;
		partSort(arr, left, begin - 1);
		partSort(arr, begin + 1, right);
	}

}

void QuickSort(vector<int> &v, int left, int right)
{
	if (left < right)
	{
		int a = left, b = right, key = v[a];
		while (a < b)
		{
			while (a < b && v[b] >= key)
				b--;
			if (a < b)
			{
				v[a++] = v[b];
			}
			while (a < b && v[a] < key)
				a++;
			if (a < b)
			{
				v[b--] = v[a];
			}
		}
		v[a] = key;
		QuickSort(v, left, a - 1);
		QuickSort(v, a + 1, right);
	}
}

void print(int* a)
{
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int a[6] = { 2, 5, 1, 6, 8, 0 };
	cout << "挖坑法的快速排序:" << endl;
	partSort(a, 0, 5);
	print(a);
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

void dealMergeSort(int * src, int * tmp, int start, int end)
{
	if (start >= end)
		return;

	int mid = (start + end) / 2;
	dealMergeSort(src, tmp, start, mid);
	dealMergeSort(src, tmp, mid + 1, end);

	int a = start, b = mid + 1, c = start;
	while (a <= mid && b <= end)
	{
		if (src[a] < src[b])
		{
			tmp[c] = src[a];
			a++;
		}
		else
		{
			tmp[c] = src[b];
			b++;
		}
		c++;
	}

	for (; a <= mid; a++, c++)
	{
		tmp[c] = src[a];
	}

	for (; b <= end; b++, c++)
	{
		tmp[c] = src[b];
	}

	int i;
	for (i = start; i <= end; i++)
	{
		src[i] = tmp[i];
	}
}


void MergeSort(int * src, int n)
{
	int *tmp = (int *)malloc(n * sizeof(int));
	dealMergeSort(src, tmp, 0, n - 1);
	free(tmp);
}


int main()
{
	int arr[5] = { 4, 6, 2, 7, 1 };
	MergeSort(arr, 5);

	for (auto & i : arr)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}
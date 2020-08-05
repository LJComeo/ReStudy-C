#include <iostream>
#include <vector>
using namespace std;



void dealMergeSort(int *src, int *tmp, int start, int end)//里面自己的函数实现
{
	if (start >= end)
	{
		return;
	}

	int mid = (start + end) / 2;
	dealMergeSort(src, tmp, start, mid);
	dealMergeSort(src, tmp, mid + 1, end);

	int a = start;
	int b = mid + 1;
	int c = start;
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

void MergeSort(int *src, int n)//归并排序的外界接口
{
	int *tmp = (int *)malloc(n*sizeof(int));
	dealMergeSort(src, tmp, 0, n - 1);
	free(tmp);
}

int main()
{

	return 0;
}
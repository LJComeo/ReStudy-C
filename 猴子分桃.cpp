#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			cout << (long)pow(5, n) - 4 << " " << (long)pow(4, n) - 4 + n << endl;
			//老猴子获得的桃子数量最后+n，是因为每个猴子都会给老猴子一个桃子，-4是因为我们借给他们四个桃子
			//最初的桃子数量，在我们借给他四个之后，就可以分清，分步骤列出来就可以看出规律，最后把我们借给的4个减去就行了
		}
	}
	return 0;
}
#include <iostream>
using namespace std;

void swapN(int* a, int* b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}


int main0()
{
	int a = 1;
	int b = 2;
	swapN(&a, &b);
	cout << a << ' ' << b << endl;
	return 0;

}
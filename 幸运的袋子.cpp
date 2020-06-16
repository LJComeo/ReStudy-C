#include<iostream>
#include<algorithm>
using namespace std;

int n;
int a[1000];

int happy(int pos, int sum, int mult){
	int i;
	int count = 0;
	for (i = pos; i<n; ++i){
		sum += a[i];
		mult *= a[i];
		if (sum>mult){
			count += 1 + happy(i + 1, sum, mult);
		}
		else if (a[i] == 1){
			count += happy(i + 1, sum, mult);
		}
		else{
			break;
		}
		sum -= a[i];
		mult /= a[i];
		while (i<n - 1 && a[i] == a[i + 1]){
			++i;
		}
	}
	return count;
}

int main(){
	cin >> n;
	for (int i = 0; i<n; ++i){
		cin >> a[i];
	}
	sort(a, a + n);
	cout << happy(0, 0, 1);

	return 0;
}
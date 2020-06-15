#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> getyueshu(int n){
	vector<int> a;
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			a.push_back(i);
			if (n / i != i)
				a.push_back(n / i);
		}
	}
	return a;
}

int main(){
	int N, M;
	cin >> N >> M;
	vector<int> dp(M + 1, M);
	dp[N] = 0;
	for (int i = N; i <= M; i++){
		vector<int> path = getyueshu(i);
		for (int j = 0; j<path.size(); j++){
			if (i + path[j] <= M){
				dp[i + path[j]] = min(dp[i] + 1, dp[i + path[j]]);
			}
		}
	}
	if (dp[M] == M){
		cout << -1;
	}
	else{
		cout << dp[M];
	}
	return 0;
}
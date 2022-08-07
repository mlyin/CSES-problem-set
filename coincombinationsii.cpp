#include <bits/stdc++.h>

typedef long long ll;
ll a[1000001];
int n;
using namespace std;

const int MOD = (int) 1e9 + 7;

int solve(int x) {
	vector<int> coins;
	for (int i = 0; i < n; i++) {
		int y; cin >> y;
		coins.push_back(y);
	}
	for (auto c : coins) {
		for (int i = 1; i <= x; i++) {
			if (i - c >= 0) {
				a[i] += a[i-c];
				a[i] %= MOD;
			}
		}
	}
	return a[x];
}

int main() {
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int x; cin >> n >> x;
	a[0] = 1;
	cout << solve(x) << "\n";
	return 0;
}
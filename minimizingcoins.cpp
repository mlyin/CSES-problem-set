#include <bits/stdc++.h>

typedef long long ll;
ll a[1000001];
int n;
using namespace std;

int solve(int x) {
	vector<int> coins;
	for (int i = 0; i < n; i++) {
		int y; cin >> y;
		coins.push_back(y);
	}
	for (int i = 1; i < 1000001; i++) {
		a[i] = INT_MAX;
		for (auto x : coins) {
			if (i - x >= 0) {
				a[i] = min(a[i], a[i-x] + 1);
			}
		} 
	}
	if (a[x] == INT_MAX) {
		return -1;
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
	a[0] = 0;
	cout << solve(x) << "\n";
	return 0;
}
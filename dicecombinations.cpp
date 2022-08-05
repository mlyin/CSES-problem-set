#include <bits/stdc++.h>

typedef long long ll;
ll a[1000001];
using namespace std;

int solve(int x) {
	if (x <= 6) {
		return a[x];
	}
	for (int i = 7; i < 1000001; i++) {
		a[i] = ((a[i-1] + a[i-2] + a[i-3] + a[i-4] + a[i-5] + a[i-6]) % 1000000007);
	}
	return a[x];
}

int main() {
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n; cin >> n;
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	a[4] = 8;
	a[5] = 16;
	a[6] = 32;
	cout << solve(n) << "\n";
	return 0;
}
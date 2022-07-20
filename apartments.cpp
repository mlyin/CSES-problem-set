#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
	ll n, m, k; cin >> n >> m >> k; //n = number of applicants, m = number of apartments
	vector<ll> sizes; //45 60 60 80 after sorting
	vector<ll> apartments; //30 60 75 after sorting
	for (int i = 0; i < n; i++) {
		ll x; cin >> x;
		sizes.push_back(x);
	}
	for (int i = 0; i < m; i++) {
		ll x; cin >> x;
		apartments.push_back(x);
	}
	sort(sizes.begin(), sizes.end());
	sort(apartments.begin(), apartments.end());
	// for (int i = 0; i < n; i++) {
	// 	cout << sizes[i] << " ";
	// }
	// cout << "\n";
	// for (int i = 0; i < m; i++) {
	// 	cout << apartments[i] << " ";
	// }
	// cout << "\n";
	ll cnt = 0;
	ll aptIndex = 0;
	ll sizesIndex = 0;
	while (sizesIndex < n && aptIndex < m) {
		if (abs(sizes[sizesIndex] - apartments[aptIndex]) <= k) {
			cnt++;
			aptIndex++;
			sizesIndex++;
		} else if (sizes[sizesIndex] < apartments[aptIndex]) {
			sizesIndex++;
		} else {
			aptIndex++;
		}
	}
	cout << cnt << "\n";
}

int main() {
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	solve();
	return 0;
}
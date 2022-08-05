#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
	int n; int m; cin >> n >> m;
	string res = "";
	for (int i = 0; i < m; i++) {
		res += "B";
	}
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		if (res[min(v[i]-1, m - v[i])] == 'A') {
			res[v[i]-1] = 'A';
			res[m-v[i]] = 'A';

		} else {
			res[min(v[i]-1, m - v[i])] = 'A';
		}
	}
	cout << res << "\n";
}

int main() {
	#ifndef ONLINE_JUDGE
		clock_t tStart = clock();
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
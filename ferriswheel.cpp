#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve() {
	int n, weight; cin >> n >> weight;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int res = 0;
	int left = 0;
	int right = n - 1;
	while (right > left) {
		if (a[left] + a[right] <= weight) {
			left++;
			right--;
			res++;
		} else {
			right--;
			res++;
		}
	}
	if (left == right) res++;
	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << "\n";
	cout << res << "\n";
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
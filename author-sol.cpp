#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// look at the previous element
		int k = (a[0] == 1 ? 2 : 1);
		for (int i = 1; i < n; i++) {
			if (a[i] == 1) {
				k += (a[i - 1] == 1 ? 5 : 1);
			} else if (a[i - 1] == 0) {
				k = -1;
				break;
			}
		}
		cout << k << '\n';
	}
	return 0;
}

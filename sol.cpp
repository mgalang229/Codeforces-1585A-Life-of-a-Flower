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
		int k = 1;
		int not_watered = 0;
		int watered = 0;
		for (int i = 0; i < n; i++) {
			// count watered and non-watered days
			not_watered += (a[i] == 0);
			watered += (a[i] == 1);
			// if watered for 2 consecutive days, then add 5, otherwise 1
			if (a[i] == 1) {
				k += (watered == 2 ? 5 : 1);
			}
			// if not watered for 2 consecutive days, then break and the answer is -1
			// otherwise, if i-th day is considered as watered day, then reset back to 0
			if (not_watered == 2) {
				k = -1;
				break;
			} else if (a[i] == 1) {
				not_watered = 0;
			}
			// if watered for 2 consecutive days and the i-th day is watered, then reset back to 1
			// otherwise, if the i-th day is considered as non-watered day, then reset back to 0
			if (watered == 2 && a[i] == 1) {
				watered = 1;
			} else if (a[i] == 0) {
				watered = 0;
			}
		}
		cout << k << '\n';
	}
	return 0;
}

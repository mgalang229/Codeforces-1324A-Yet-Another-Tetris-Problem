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
		int even = 0;
		int odd = 0;
		// the answer is simple, if the parity of all the numbers
		// are the same then, the answer is YES, otherwise NO
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}
		cout << (even - odd == even || odd - even == odd ? "YES" : "NO") << '\n';
	}
	return 0;
}

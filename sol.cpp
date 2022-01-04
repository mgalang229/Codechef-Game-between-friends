#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		// let a = Nitin's coins, b = Sobhagya's coins
		// for Sobhagya to win, his/her coins should be greater than Nitin
		// fo Nitin to win, his/her coins should be greater than or equal to Sobhagya
		if (a < b) {
			a += c;
		} else {
			b += c;
		}
		if (a < b) {
			a += d;
		} else {
			b += d;
		}
		cout << (a >= b ? 'N' : 'S') << '\n';
	}
	return 0;
}
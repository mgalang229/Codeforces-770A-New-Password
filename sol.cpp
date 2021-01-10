#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	// get the "i mod k" so that it repeats within the range of 'k'
	// this value will also be the range of the letters to be used
	// add this value to 'a' or 97 (in decimal) to get the new letter
	for (int i = 0; i < n; i++) {
		cout << char ((i % k) + 'a');
	}
	cout << '\n';
	return 0; 
}

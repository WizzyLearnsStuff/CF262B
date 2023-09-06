#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v(n);

	int s = 0;
	for (int &e : v) {
		cin >> e;
		if (e < 0 && k > 0) {e = -1 * e; k--;}
		s += e;
	}

	if (k % 2 == 0) {
		cout << s;
	} else {
		int m = v[0];
		for (int e : v) {
			if (e < m) m = e;
		}

		cout << s - 2 * m; // a + b + m - 2m = a + b - m
	}
}

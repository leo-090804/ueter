#include <iostream>

using namespace std;

long square(int n) {
	int idx;
	for (int i = 1; i <= n; ++i) {
		idx = i * i;
	}

	if (n > 0) {
		return idx += square(n - 1);
	}
}

int main() {
	int n;
	cin >> n;
	cout << square(n);
}
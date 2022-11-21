#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int l = n - i + 1; l <= n; ++l) {
			cout << "*";	
		}
		cout << endl;
	}
}
#include <iostream>
using namespace std;
int main() {

	int n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= (2 * n + 1) + 1; i += 2) {
		sum += i;
	}
	cout << sum << endl;
}
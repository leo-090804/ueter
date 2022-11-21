#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double recursion(int n) {
	if (n > 0) {
		return sqrt(n + recursion(n - 1));
	}
}

int main() {
	int n; 
	cin >> n;
	cout << fixed << setprecision(2) << recursion(n);
}
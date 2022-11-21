#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {
	int n; 
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += pow(i, i);
	}
	cout << sum;
}
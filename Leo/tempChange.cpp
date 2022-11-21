#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int fahrenheitDegree(double a) {
	return a;
}
double celsiusDegree(double a) {
	return ((a - 32) * 5 / 9);
}
double kelvinDegree(double a) {
	return ((a- 32) * 5 / 9 + 273.15);
}

int main() {
	double a, b;
	cin >> a >> b;
	int x = min(a, b); 
	int y = max(a, b);
	for (int i = x; i <= y; ++i) {
		cout << fixed << setprecision(2) << fahrenheitDegree(i) << " " << celsiusDegree(i) << " " << kelvinDegree(i) << endl;
	}
}

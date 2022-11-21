#include <iostream>

using namespace std;

double before12H(double sT, double eT) {
	return ((eT - sT) * 6000);
}
double after12H(double sT, double eT) {
	return ((eT - sT) * 7500);
}
double both(double sT, double eT) {
	return ((eT - 12) * 7500 + (12 - sT) * 6000);
}
int main() {
	double startTime, endTime;
	cin >> startTime >> endTime;
	if (startTime > endTime) {
		cout << "invalid" << endl;
	}
	else if (startTime < 6 || endTime > 18) {
		cout << "invalid" << endl;
	}
	else if (startTime <= 12 && endTime <= 12) {
		cout << before12H(startTime, endTime) << endl;
	}
	else if (startTime >= 12 && endTime >= 12) {
		cout << after12H(startTime, endTime) << endl;
	}
	else if (startTime <= 12 && endTime >= 12) {
		cout << both(startTime, endTime) << endl;
	}
}
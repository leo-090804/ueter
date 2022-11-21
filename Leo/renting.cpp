#include <iostream>
using namespace std;
	
double before17H(double sT, double eT, double numBer) {
	return ((eT - sT) * numBer * 2500);
}
double after17H(double sT, double eT, double numBer) {
	return ((eT - sT) * numBer * 3000);
}
double both(double sT, double eT, double numBer) {
	return (((eT - 17) * 3000 + (17 - sT) * 2500) * numBer);
}
int main() {
	double startTime, endTime, numBer;
	cin >> startTime >> endTime >> numBer;
	if (startTime > endTime) {
		cout << "invalid" << endl;
	}
	else if (startTime < 6 || endTime > 21) {
		cout << "invalid" << endl;
	}
	else if (startTime <= 17 && endTime <= 17) {
		cout << before17H(startTime, endTime, numBer) << endl;
	}
	else if (startTime >= 17 && endTime >= 17) {
		cout << after17H(startTime, endTime, numBer) << endl;
	}
	else if (startTime <= 17 && endTime >= 17) {
		cout << both(startTime, endTime, numBer) << endl;
	}
}
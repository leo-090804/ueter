#include <iostream>
#include <iomanip>

using namespace std;

double circumstance (double a, double b) {
	return ((a + b) * 2);
}
double size(double a, double b)			 {
	return (a * b); 
}

int main()								 {
	double a, b;
	cout << "Enter the width and the length of the rectangle" << endl;
	cin >> a >> b;
	cout << "The circimstance is: " << circumstance(a, b) << endl;
	cout << "The size is: " << size(a, b) << endl;
}
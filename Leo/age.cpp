#include <iostream>
#include <iomanip>

int p(int a, int b, int c) {     // <-- this is a function prototype //
	return (a + (b - c));
}

using namespace std;
int main() {
	int	ageAtpresent, yearAtpresent, otherYear;
	cout << "Enter the year at present: " << endl;
	cin >> yearAtpresent;
	cout << "Enter your age at present: " << endl;
	cin >> ageAtpresent;
	cout << "Enter the year you want" << endl;
	cin >> otherYear;
	cout << "Your age now is: " << p(ageAtpresent, otherYear, yearAtpresent);

}
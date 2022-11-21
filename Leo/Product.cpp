#include <iostream>
using namespace std;

int productOftwonum(int a, int b) {
	return (a * b);
}

int main() {
	int x, y;
	cout << "Enter your number: " << endl;
	cin >> x >> y;
	cout << productOftwonum (x, y) << endl;

}
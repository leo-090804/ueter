#include <iostream>

using namespace std;

void division(int arr[100]){
	for (int i = 0; i < 100; ++i) {
		if (arr[i] == -1) {
			break;
		}
		if (arr[i] > 0 && arr[i] % 5 == 0) {
			cout << arr[i] / 5 << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}

int main() {
	int number[100];
	for (int i = 0; i < 100; ++i) {
		cin >> number[i];
		if (number[i] == -1) {
			break;
		}
	}

	division(number);
	cout << "bye";
}
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int product[1000];
    for (int i = 0; i < n; ++i) {
        cin >> product[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += product[i];
    }
    double mean = sum / n;
    for (int i = 0; i < n; ++i) {
        if (product[i] >= mean) {
            cout << product[i];
        }
    }
    return 0;
}

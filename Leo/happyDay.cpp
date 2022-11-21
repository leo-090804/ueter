#include <iostream>

using namespace std;

void input(int n, int product[100]) {
    for (int i = 0; i < n; ++i) {
        cin >> product[i];
    }
}

void happyDate(int n, int product[100]) {
    for (int i = 0; i < n; ++i) {
        if (product[i] >= 0) {
            cout << i + 1 << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    int product[100];
    input(n, product);
    happyDate(n, product);
}
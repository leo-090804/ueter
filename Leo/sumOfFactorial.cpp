#include <iostream>

using namespace std;

long sum(int n) {
    int product = 1;
    for (int i = 1; i <= n; ++i) {
        product *= i;
    }
    if (n > 0) {
        return product + sum(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
}
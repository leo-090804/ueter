#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && i % 2 == 0) {
            count += 1;
        }
    }
    cout << count;
}
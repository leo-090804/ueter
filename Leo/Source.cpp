#include <iostream>

using namespace std;

long product(int n) {
    if (n < 0) {
        return 1;
    }
    else {
        int x = 2 * n + 1;
        return x *= product(n - 1);
    }
}
int main() {
    int n;
    cin >> n;
    cout << product(n);
}

#include <iostream>

using namespace std;

int main() {
    int n =10;
    long long proDuct = 1;
    //cin >> n;
    for (int i = 1; i <= (2 * n + 1); i += 2) {
        proDuct = proDuct * i;
    }
    cout << proDuct;
}
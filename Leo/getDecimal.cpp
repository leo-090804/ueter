#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double decimal = 0.5;
    cin >> n;
    for (int i = 1; i <= n; i += 1) {
        decimal = decimal + double(i / (i + 1));
    }
    cout << fixed << setprecision(5) << decimal;
}
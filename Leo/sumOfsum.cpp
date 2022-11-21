#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int falseSum = 0;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        falseSum += i;
        sum += falseSum;
    }
    cout << sum;
}
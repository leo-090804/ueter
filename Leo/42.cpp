#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k[1000];
    for (int i = 0; i < n; ++i) {
        cin >> k[i];
    }
    int amount = 0;
    int result1 = 0;
    int result2 = 0;
    for (int i = 0; i < n; ++i) {
        if (k[i] == 42) {
            result1 = amount + 1;
        }
        else {
            result2 = amount;
        }
    }
    if (result1 == 1) {
        cout << "I've found the meaning of life!";
    }
    else if (result2 == 0) {
        cout << "It's a joke!";
    }
}
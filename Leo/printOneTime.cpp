#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int count[100000] = { 0 };

    for (int i = 0; i < n; ++i) {
        count[a[i]]++;
    }

    for (int i = 0; i < n; ++i) {
        if (count[a[i]] != 0) {
            cout << a[i] << " " << count[a[i]] << endl;
            count[a[i]] = 0;
        }
    }
}
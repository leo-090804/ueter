#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double score[1000];
    for (int i = 0; i < n; ++i) {
        cin >> score[i];
    }
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += score[i];
    }
    cout << fixed << setprecision(2) << double(sum / n);
}
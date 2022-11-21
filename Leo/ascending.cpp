#include<iostream>

using namespace std;

int main() {
    int n = 6;
    //cin >> n;
    int k[1000] = {1,4,6,7,2,8};
    //for (int i = 0; i < n; ++i) {
        //cin >> k[i];
    //}
    for (int i = 0; i < n; ++i) {
        for (int l = i + 1; l < n; ++l) {
            if (k[l] < k[i]) {
                int alt1 = k[i];
                int alt2 = k[l];
                k[i] = alt2;
                k[l] = alt1;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << k[i] << " ";
    }
    return 0;
}
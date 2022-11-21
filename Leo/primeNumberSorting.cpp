// C++ program to sort an array
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

/***************************************************************************************
* 1. Xác định số nguyên tố: Input: một số, output: Boolean
* 2. Xác định số nguyên tố trong mảng: Input: mảng, output: mảng của index của số nguyên tố
* 3. Sort: Input: mảng, output: mảng đã sắp xếp
****************************************************************************************/

bool isPrime(int a) {
    for (int i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

void primeSorting(int n, int arr[100]) {
    vector<int> idx;
    for (int i = 0; i < n; ++i) {
        if (isPrime(arr[i])) {
            idx.push_back(arr[i]);
        }
    }
    //asceding sorting
    sort(idx.begin(), idx.end()); 

    //update the indexArray elements

    int j = 0;
    for (int i = 0; i < n; ++i) {
        if (isPrime(arr[i])) {
            arr[i] = idx[j];
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    primeSorting(n, arr);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "i";
    }
}

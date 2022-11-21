#include <iostream>

using namespace std;

int main() {
    int sumOfanimal, sumOfleg;
    cin >> sumOfanimal >> sumOfleg;
    int chicken, dog;
    for (dog = 1; dog <= sumOfanimal; ++dog) {
        chicken = sumOfanimal - dog;
        if (2 * chicken + 4 * dog == sumOfleg) {
            cout << "chicken = " << chicken << ", " << "dog = " << dog;
            exit(0);
        }
    }
    cout << "invalid";
}
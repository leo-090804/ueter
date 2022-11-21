#include <iostream>
#include <iomanip>
#include <cmath>

double delta(double a, double b, double c) {
    return (b * b - 4 * a * c);
}

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a != 0 && delta(a, b, c) < 0) {
        cout << "phuong trinh vo nghiem";
    }
    else if (a == 0 && b == 0 && c != 0) {
        cout << "phuong trinh vo nghiem";
    }
    else if (a == 0 && b != 0 && c != 0) {
        cout << "phuong trinh co 1 nghiem \n" << fixed << setprecision(5) << -c / b;
    }
    else if (a == 0 && b == 0 && c == 0) {
        cout << "phuong trinh co vo so nghiem";
    }
    else if (a != 0 && b == 0 && c == 0) {
        cout << "phuong trinh co 1 nghiem \n" << fixed << setprecision(5) << 0 / a;
    }
    else if (a != 0 && delta(a, b, c) == 0) {
        double n = -b / (2 * a);
        cout << "phuong trinh co 1 nghiem \n" << fixed << setprecision(5) << n;
    }
    else if (a != 0 && delta(a, b, c) > 0) {
        cout << "phuong trinh co 2 nghiem \n" << fixed << setprecision(5) << (-b - sqrt(delta(a, b, c))) / (2 * a) << " " << (-b + sqrt(delta(a, b, c))) / (2 * a);
    }
}
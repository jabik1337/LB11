#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a[3][3];

    cout << "Введіть елементи матриці 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    double product = 1;
    bool hasNegative = false;

    // парні рядки — 2-й (індекс 1)
    for (int i = 1; i < 3; i += 2) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] < 0) {
                hasNegative = true;
                product *= a[i][j];
            }
        }
    }

    if (hasNegative)
        cout << "Добуток від’ємних елементів у парних рядках = " << product;
    else
        cout << "У парних рядках немає від’ємних елементів.";

    return 0;
}



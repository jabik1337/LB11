#include <iostream>
#include <cmath>
using namespace std;

double calculate(double m, double x) {
    double a = sqrt(fabs(x));
    double b = pow(x, 4) + m * m;
    double y = pow(cos(a + sin(b)), 2);
    return y;
}

int main() {
    double m, x;
    cout << "Введіть m та x: ";
    cin >> m >> x;

    cout << "y = " << calculate(m, x);
    return 0;
}


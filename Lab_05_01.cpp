#include <iostream>
#include <cmath>

using namespace std;

double g(const double a, const double b);
int main() {
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double r = (g(s * s, t + 1) + g(t * t, s + 1)) / (1 + pow(g(s + 1, s * t), 2));

    cout << "r = " << r << endl;

    return 0;
}

double g(const double a, const double b) {
    return ((sin(a * b)) / (a * a + b * b));
}
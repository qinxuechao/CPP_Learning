//
// Created by Xuechao Qin on 4/6/2022.
//

#include "iostream"

// an inline function definition
inline double squre(double x) {
    return x * x;
}

int main() {
    using namespace std;
    double a, b;
    double c = 13.0;

    a = squre(5.0);
    b = squre(4.5 + 7.5);   // can pass expressions
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << squre(c++) << "\n";
    cout << "Now c = " << c << "\n";

    return 0;
}
//
// Created by Xuechao Qin on 4/25/2022.
//
#include "iostream"
#include "functional"
#include "somedefs.h"

double dub(double x) { return 2.0 * x; }

double square(double x) { return x * x; }

int main() {
    using std::cout;
    using std::endl;
    using std::function;
    typedef function<double(double)> wrapper;
    double y = 1.21;
    wrapper ef1 = dub;
    wrapper ef2 = square;
    wrapper ef3 = Fq(10.0);
    wrapper ef4 = Fp(10.0);
    wrapper ef5 = [](double u) { return u * u; };
    wrapper ef6 = [](double u) { return u + u / 2.0; };
    cout << "Function pointer dub:\n";
    cout << " " << use_f(y, ef1) << endl;
    cout << "Function pointer square:\n";
    cout << " " << use_f(y, ef2) << endl;
    cout << "Function object Fp:\n";
    cout << " " << use_f(y, ef3) << endl;\
    cout << "Function object Fq:\n";
    cout << " " << use_f(y, ef4) << endl;

    cout << "Lambda expression 1:\n";
    cout << " " << use_f(y, ef5) << endl;
    cout << "Lambda expression 2:\n";
    cout << " " << use_f(y, ef6) << endl;
}

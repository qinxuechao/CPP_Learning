//
// Created by Xuechao Qin on 4/25/2022.
//

#ifndef CPP_LEARNING_SOMEDEFS_H
#define CPP_LEARNING_SOMEDEFS_H

#include "iostream"

template<typename T, typename F>
T use_f(T v, F f) {
    static int count = 0;
    count++;
    std::cout << " use_f count = " << count << ", &count = " << &count << std::endl;
    return f(v);
}

class Fp {
private:
    double z_;
public:
    Fp(double z = 1.0) : z_(z) {}

    double operator()(double p) {
        return z_ * p;
    }
};

class Fq {
private:
    double z_;
public:
    Fq(double z = 1.0) : z_(z) {}

    double operator()(double q) { return z_ + q; }
};

#endif //CPP_LEARNING_SOMEDEFS_H

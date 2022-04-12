//
// Created by Xuechao Qin on 4/12/2022.
//

#ifndef CPP_LEARNING_MYTIME3_H
#define CPP_LEARNING_MYTIME3_H

#include "iostream"

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int h, int minutes = 0);

    void AddMin(int m);

    void AddHour(int h);

    void Reset(int h = 0, int m = 0);

    Time operator+(const Time &t) const;

    Time operator-(const Time &t) const;

    Time operator*(const double n) const;

    friend Time operator*(double m, const Time &t) {
        return t * m;
    }

    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif //CPP_LEARNING_MYTIME3_H

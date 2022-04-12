//
// Created by Xuechao Qin on 4/12/2022.
//
#include "iostream"
#include "mytime1.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddHr(int h) {
    minutes += h;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const {
    Time sum;
    sum.minutes = this->minutes + t.minutes;
    sum.hours = this->hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;

    return sum;
}

void Time::Show() const {
    std::cout << hours << " hours, " << minutes << " minutes";
}


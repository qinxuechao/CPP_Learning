//
// Created by Xuechao Qin on 4/12/2022.
//

#ifndef CPP_LEARNING_MYTIME2_H
#define CPP_LEARNING_MYTIME2_H

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

    void Show() const;
};

#endif //CPP_LEARNING_MYTIME2_H

//
// Created by Xuechao Qin on 4/12/2022.
//

#ifndef CPP_LEARNING_MYTIME1_H
#define CPP_LEARNING_MYTIME1_H

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time operator+(const Time &t) const;

    void Show() const;
};

#endif //CPP_LEARNING_MYTIME1_H

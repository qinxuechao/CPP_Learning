//
// Created by Xuechao Qin on 4/13/2022.
//

#ifndef CPP_LEARNING_STONEWT_H
#define CPP_LEARNING_STONEWT_H

class Stonewt {
private:
    enum {
        Lbs_per_stn = 14
    };                  // pounds per stone
    int stone;          // whole stones
    double pds_left;    // fractional pounds
    double pounds;      // entire weight in pounds
public:
    Stonewt(double lbs);            // constructor for double pounds

    Stonewt(int stn, double lbs);   // constructor for stone, lbs

    Stonewt();                      // default constructor

    ~Stonewt();

    void show_lbs() const;          // show weight in pounds format

    void show_stn() const;          // show weight in stone format
    // conversion functions
    operator double() const;

    operator int() const;
};

#endif //CPP_LEARNING_STONEWT_H

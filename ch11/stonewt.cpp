//
// Created by Xuechao Qin on 4/13/2022.
//

#include "iostream"
#include "stonewt.h"
#include "cmath"

using std::cout;

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {}

void Stonewt::show_lbs() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_stn() const {
    cout << pounds << " pounds\n";
}

Stonewt::operator double() const {
    return pounds;
}

Stonewt::operator int() const {
    return lround(pounds + 0.5);
}

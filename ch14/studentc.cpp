//
// Created by Xuechao Qin on 4/15/2022.
//

#include "studentc.h"

using std::ostream;
using std::endl;
using std::istream;
using std::string;

// public methods
double Student::Average() const {
    if (scores.size() > 0)
        return scores.sum() / scores.size();
    else
        return 0;
}

const string &Student::Name() const {
    return name;
}

std::ostream &Student::arr_out(ostream &os) const {
    int i;
    int lim = scores.size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << scores[i] << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 == 0)
            os << endl;
    } else {
        os << " empty array ";
    }
    return os;
}

double &Student::operator[](int i) {
    return scores[i];       // use valarray<double>::operator[]()
}

double Student::operator[](int i) const {
    return scores[i];
}

// friends
// use string version of operator>>()
std::istream &operator>>(istream &is, Student &stu) {
    is >> stu.name;
    return is;
}

std::istream &getline(istream &is, Student &stu) {
    getline(is, stu.name);
    return is;
}

// use string version of operator <<()
std::ostream &operator<<(ostream &os, const Student &stu) {
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);    // use private method for scores
    return os;
}
//
// Created by Xuechao Qin on 4/19/2022.
//

#ifndef CPP_LEARNING_STUDENTI_H
#define CPP_LEARNING_STUDENTI_H

#include "iostream"
#include "valarray"
#include "string"

class Student : private std::string, private std::valarray<double> {
private:
    typedef std::valarray<double> ArrayDb;

    // private method for scores output
    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : std::string("Null Student"), ArrayDb() {}

    explicit Student(const std::string &s) : std::string(s), ArrayDb() {}

    explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}

    Student(const std::string &s, int n) : std::string(s), ArrayDb(n) {}

    Student(const char *str, const double *pd, int n) : std::string(str), ArrayDb(pd, n) {}

    ~Student() {}

    double Average() const;

    double &operator[](int i);

    double operator[](int i) const;

    const std::string &Name() const;

    // friends
    // input
    friend std::istream &operator>>(std::istream &is, Student &stu);        // one word
    friend std::istream &getline(std::istream &is, Student &stu);           // one line
    // output
    friend std::ostream &operator<<(std::ostream &os, const Student &stu);
};

#endif //CPP_LEARNING_STUDENTI_H

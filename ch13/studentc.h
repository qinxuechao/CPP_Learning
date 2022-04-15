//
// Created by Xuechao Qin on 4/15/2022.
//

#ifndef CPP_LEARNING_STUDENTC_H
#define CPP_LEARNING_STUDENTC_H

#include "iostream"
#include "string"
#include "valarray"

class Student {
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;   // contained object
    ArrayDb scores;     // contained object
    // private method for scores output
    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : name("Null Student"), scores() {}

    explicit Student(const std::string &s) : name(s), scores() {}

    explicit Student(int n) : name("Nully"), scores(n) {}

    Student(const std::string &s, int n) : name(s), scores(n) {}

    Student(const char *str, const double *pd, int n) : name(str), scores(pd, n) {}

    ~Student() {}

    double Average() const;

    const std::string &Name() const;

    double &operator[](int i);

    double operator[](int i) const;

    // friends
    friend std::istream &operator>>(std::istream &is, Student &stu);        // 1 word
    friend std::istream &getline(std::istream &is, Student &stu);           // 1 line
    friend std::ostream &operator<<(std::ostream &os, const Student &stu);

};

#endif //CPP_LEARNING_STUDENTC_H

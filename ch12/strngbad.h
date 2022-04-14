//
// Created by Xuechao Qin on 4/13/2022.
//
#include "iostream"

#ifndef CPP_LEARNING_STRNGBAD_H
#define CPP_LEARNING_STRNGBAD_H

class StringBad {
private:
    char *str;             // pointer to string
    int len;                // length of string
    static int num_strings; // number of objects
public:
    StringBad(const char *s);   // constructor
    StringBad();                // default constructor
    ~StringBad();

    friend std::ostream & operator<<(std::ostream &os, const StringBad &st);
};

#endif //CPP_LEARNING_STRNGBAD_H

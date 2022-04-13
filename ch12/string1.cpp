//
// Created by HANTAK on 4/13/2022.
//

#include "cstring"
#include "string1.h"

using std::cout;
using std::cin;

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany() {
    return num_strings;
}

// class method
String::String(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0';  //default string
    num_strings++;
}

String::String(const String &st) {
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String() {
    --num_strings;
    delete[] str;
}

// overloadded operator methods

// assign a String to a String
String &String::operator=(const String &st) {
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// assign a C string to a string
String &String::operator=(const char *s) {
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char &String::operator[](int i) {
    return str[i];
}

const char &String::operator[](int i) const {
    return str[i];
}

// overloaded operator friends
bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st, const String &st2) {
    return st2 > st;
}

bool operator==(const String &st, const String &st2) {
    return (std::strcmp(st.str, st2.str) == 0);
}

// simple string output
ostream &operator<<(ostream &os, const String &st) {
    os << st.str;
    return os;
}

istream &operator>>(istream &is, String &st) {
    char temp[String::CLINLIM];
    is.get(temp, String::CLINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

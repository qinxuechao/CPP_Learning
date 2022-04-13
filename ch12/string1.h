//
// Created by Xuechao Qin on 4/13/2022.
//

#ifndef CPP_LEARNING_STRING1_H
#define CPP_LEARNING_STRING1_H

#include "iostream"

using std::ostream;
using std::istream;

class String {
private:
    char *str;                      // pointer to string
    int len;                        // length of string
    static int num_strings;         // number of objects
    static const int CLINLIM = 80;  // cin input limit
public:
    String(const char *s);      // constructor
    String();                   // default constructor
    String(const String &);     // copy constructor
    ~String();                  // destructor

    int length() const { return len; }

    // overloaded operator methods
    String &operator=(const String &);

    String &operator=(const char *);

    char &operator[](int i);

    const char &operator[](int i) const;

    // overloaded operator friends
    friend bool operator<(const String &st, const String &st2);

    friend bool operator>(const String &st, const String &st2);

    friend bool operator==(const String &st, const String &st2);

    friend ostream &operator<<(ostream &os, const String &st);

    friend istream &operator>>(istream &is, String &st);

    //static function
    static int HowMany();


};


#endif //CPP_LEARNING_STRING1_H

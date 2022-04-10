//
// Created by Xuechao Qin on 4/11/2022.
//

#ifndef CPP_LEARNING_STOCK10_H
#define CPP_LEARNING_STOCK10_H

#include "string"

class Stock // class declaration
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock();    // default constructor
    explicit Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();   // noisy destructor

    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};  // note semicolon at the end

#endif //CPP_LEARNING_STOCK10_H

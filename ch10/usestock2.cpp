//
// Created by Xuechao Qin on 4/11/2022.
//
#include "iostream"
#include "stock20.h"

const int STKS = 4;

int main() {
    // create an array of initialized objects
    Stock stocks[STKS] = {
            Stock("NanoSmart", 12, 20.0),
            Stock("Buffo Objects", 200, 2.0),
            Stock("Monolithic obelisks", 130, 3.25),
            Stock("Fleep Enterprises", 60, 6.5)
    };
    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++) {
        stocks[st].show();
    }
    // set pointer to first element
    const Stock *top = &stocks[0];
    for (st = 0; st < STKS; st++) {
        top = &top->topval(stocks[st]);
    }
    // now top points to the most valuable holding
    std::cout << "\nMost valuable holding:\n";
    top->show();

    return 0;
}

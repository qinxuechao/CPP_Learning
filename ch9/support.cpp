//
// Created by Xuechao Qin on 4/7/2022.
//

#include "iostream"

extern double warming;  // use warming from another file

// function prototype
void update(double dt);

void local();

using std::cout;

void update(double dt) {
    extern double warming;  // modifies global variable
    warming += dt;          // optional redeclaration
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n ";
}

void local() {  // uses local variable
    double warming = 0.8;   // new variable hides external one
    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the scope resolution operator
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}

//
// Created by Xuechao Qin on 4/7/2022.
// external.cpp --external variables
// compile with support.cpp

#include "iostream"

using namespace std;
// external variable
double warming = 0.3;   // warming defined

//function prototypes
void update(double dt);

void local();

int main() {    // uses global variables
    cout << "Global warming is " << warming << " degrees.\n ";
    update(0.1);    // call function to change warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";
    return 0;
}

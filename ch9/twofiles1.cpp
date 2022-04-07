//
// Created by Xuechao Qin on 4/7/2022.
//

#include "iostream"

int tom = 3;                // to be compiled with two file2.cpp
int dick = 30;              // external variable definition
static int harry = 300;     // static, internal linkage

// function prototype
void remote_access();

int main() {
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}
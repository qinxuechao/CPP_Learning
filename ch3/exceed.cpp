//
// Created by Xuechao Qin on 3/22/2022.
//

#include "iostream"

#define ZERO 0

#include "climits"

int main() {
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam; // ok if variable sam already defined

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars depostied." << endl;
    sam = sam + 1;
    sue += 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\n Poor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\n Poor Sam!" << endl;

    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\n Poor Sam!" << endl;

    return 0;
}

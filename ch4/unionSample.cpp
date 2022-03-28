//
// Created by xcqin on 3/28/2022.
//

#include "iostream"
#include "cstdint"

using namespace std;

union S {
    int32_t n;          // occupies 4 bytes
    uint16_t s[2];      // occupies 4 bytes
    uint8_t c;          // occupies 1 bytes
};

int main() {
    S s = {0x12345678}; // initializes the first memeber, s.n is now the active member
    // at this point, reading from s.s or s.c is undefined behaviour
    cout << std::hex << "s.n = " << s.n << "\n";
    s.s[0] = 0x00ll; // s.s is now the active member
    // at this point, reading from n or c is UB but most compilers defines it
    cout << "s.c is now " << +s.c << "\n" // ll or 00, depending on platform
    << "s.n is now" << s.n << "\n";       // 123400ll or 00ll5678
}


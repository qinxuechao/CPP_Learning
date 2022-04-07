//
// Created by Xuechao Qin on 4/7/2022.
//
#include "iostream"

// constants
const int Arsize = 10;

// function prototype
void strcount(const char *str);

int main() {
    using namespace std;
    char input[Arsize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input, Arsize);
    while (cin) {
        cin.get(next);
        while (next != '\n') {      // string didn't fit!
            cin.get(next);      // dispose of remainder
        }
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, Arsize);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const char *str) {
    using namespace std;
    static int total = 0;   // static local variable
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while (*str++) {
        count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}


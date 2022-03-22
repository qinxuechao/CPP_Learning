//
// Created by xqin on 3/22/2022.
//

#include <iostream>

int main() {
    using namespace std;
    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << "carrots. ";
    cout << endl;
    carrots = --carrots;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}

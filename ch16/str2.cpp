//
// Created by Xuechao Qin on 4/22/2022.
//

#include "iostream"
#include "string"

int main() {
    using namespace std;
    string empty;
    string small = "bit";
    string large = "Elephants are a girl's best friends";
    cout << "Size:\n";
    cout << "\tempty: " << empty.size() << endl;
    cout << "\tsmall: " << small.size() << endl;
    cout << "\tlarge:" << large.size() << endl;
    cout << "Capacities: \n";
    cout << "\tempty: " << empty.capacity() << endl;
    cout << "\tsmall: " << small.capacity() << endl;
    cout << "\tlarge: " << large.capacity() << endl;
    empty.reserve(50);
    cout << "Capacity after empty.reserve(50): "
         << empty.capacity() << endl;

    return 0;
}

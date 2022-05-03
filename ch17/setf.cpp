//
// Created by Xuechao Qin on 5/3/2022.
//

#include "iostream"

int main() {
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;
    cout << "Today's water temperature: ";
    cout.setf(ios_base::showpos);   // show plus sign
    cout << temperature << endl;

    cout << "For our programming friends,. that's\n";
    cout << std::hex << temperature << endl;     // use hex
    cout.setf(ios_base::uppercase);        // use uppercase in hex
    cout.setf(ios_base::showbase);         // use 0x prefix for hex
    cout << "or\n";
    cout << temperature << endl;
    cout << "How " << true << "! oops -- How ";
    cout.setf(ios_base::boolalpha);
    cout << true << endl;

    return 0;
}
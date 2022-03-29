//
// Created by Xuechao Qin on 3/29/2022.
//
#include "iostream"

int main() {
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters enter # to quit :\n";
    // textin1
//    cin >> ch;
//    while (ch != '#') {
//        cout << ch;
//        ++count;
//        cin >> ch;
//    }

    // textin2
//    cin.get(ch);
//    while (ch != '#') {
//        cout << ch;
//        ++count;
//        cin.get(ch); //use it again
//    }

    // textin3
    cin.get(ch);
    while (!cin.fail()) {
        cout << ch;
        ++count;
        cin.get(ch);
    }// Test for EOF
    cout << endl << count << " characters read\n ";

    return 0;
}

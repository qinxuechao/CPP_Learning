//
// Created by xqin on 3/24/2022.
//

#include "iostream"

int main() {
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get();
    cout << "what is its street address? \n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";

    return 0;
}

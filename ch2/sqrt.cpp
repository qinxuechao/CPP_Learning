//
// Created by xqin on 3/22/2022.
//

#include "iostream"
#include "cmath"

int main() {
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's tje equivalent of a square " << side << " feet of the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}


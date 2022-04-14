//
// Created by Xuechao Qin on 4/13/2022.
//
#include "iostream"
#include "stonewt.h"

using std::cout;

void display(const Stonewt &st, int n);

int main() {
//    Stonewt incognito = 275;
//    Stonewt wolfe(285.7);
//    Stonewt taft(21, 8);
//
//    cout << "The celebrity weighed ";
//    incognito.show_stn();
//    cout << "The detective weighed ";
//    wolfe.show_stn();
//    cout << "The president weighed ";
//    taft.show_lbs();
//
//    incognito = 276.8;
//    taft = 325;
//    cout << "After dinner, the celebrity weighed ";
//    incognito.show_stn();
//    cout << "After dinner, the President weighed";
//    taft.show_lbs();
//    display(taft, 2);
//    cout << "The wrestler weighed even more.\n";
//    display(422, 2);
//    cout << "No stone left unearned\n";

// stone1
    Stonewt poppings(9, 2.8);    // 9 stones, 2.8 pounds
    double p_wt = poppings;              // implicit conversion
    cout << "Convert to double => ";
    cout << "Poppings: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppings: " << int(poppings) << " pounds.\n";

    return 0;
}

void display(const Stonewt &st, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Wow! ";
        st.show_stn();
    }
}
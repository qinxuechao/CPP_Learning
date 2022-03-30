//
// Created by Xuechao Qin on 3/30/2022.
//

#include "iostream"

const int Max = 5;

int main() {
    using namespace std;
    // get data
    int golf[Max];
    cout << "Please enter your golf scores. \n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    for (i = 0; i < Max; i++) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();    // reset input
            while (cin.get() != '\n') {
                // get rid of bad input
            }
            cout << "Please enter a number: ";
        }
    }
    // Calculate average
    double total = 0.0;
    for (i = 0; i < Max; i++) {
        total += golf[i];
    }
    // reports results
    cout << total / Max << " rounds\n";

    return 0;
}
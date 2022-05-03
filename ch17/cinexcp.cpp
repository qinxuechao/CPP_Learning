//
// Created by Xuechao Qin on 5/4/2022.
//

#include "iostream"
#include "exception"

int main() {
    using namespace std;
    // have failbit cause an exception to be thrown
    cin.exceptions(ios::failbit);
    cout << "Enter numbers: ";
    int sum = 0;
    int input;
    try {
        while (cin >> input)
            sum += input;
    } catch (ios_base::failure &bf) {
        cout << bf.what() << endl;
        cout << "O! the horror!\n";
    }

    cout << "Last value entered =" << input << endl;
    cout << "Sum = " << sum << endl;
    return 0;
}

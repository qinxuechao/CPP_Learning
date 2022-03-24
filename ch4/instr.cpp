//
// Created by Xuechao Qin on 3/24/2022.
//

#include "iostream"

int main() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

//    cout << "Enter your name:\n";
//    cin.getline(name, ArSize);
//    cout << "Enter your favorite dessert: \n";
//    cin.getline(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";


    return 0;
}
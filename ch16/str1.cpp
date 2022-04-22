//
// Created by Xuechao Qin on 4/22/2022.
//

#include "iostream"
#include "string"
// using string constructor

int main() {
    using namespace std;
    string one("Lottery Winner!");  //ctor #1
    cout << one << endl;
    string two(20, '$');
    cout << two << endl;
    string three(one);
    cout << three << endl;
    one += " Opps!";
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    string four;
    four = two + three;
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls, 20);
    cout << five << "!\n";
    string six(alls + 6, alls + 10);
    cout << six << ", ";
    string seven(&five[6], &five[10]);
    cout << seven << "...\n";
    string eight(four, 7, 16);  // ctor #7
    cout << eight << " in motion!" << endl;
    return 0;
}

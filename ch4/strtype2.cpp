//
// Created by HANTAK on 3/24/2022.
//

#include "iostream"
#include "string"

int main() {
    using namespace std;
    string s1 = "penguin";
    string s2, s3;
    cout << "You can assign one string to another: s2 = s1\n";
    s2 = s1;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yield  s1 = " << s1 << endl;
    s2 += "for day";
    cout << "s2 += \"for day\" yields s2 = " << s2 << endl;

    return 0;
}
//
// Created by Xuechao Qin on 3/29/2022.
//

#include "iostream"
#include "cstring"

using namespace std;

char *getName();   // function prototype

int main() {
    char *name;

    name = getName();
    cout << name << " at " << (int *) name << "\n";
    delete[] name;
    return 0;
}

char *getName() {       // return pointer to a new string
    char temp[80];      // temporary shortage
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);       // copy string into smaller space

    return pn;                  // temp lost when function ends
}


//
// Created by xqin on 3/21/2022.
//

#include "iostream"

int main() {
    using namespace std;
    char dog[8] =  {'b', 'e', 'a',' ', 'e', 'f'}; // Not a string
    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; // string
    cout << "Dog:";
    cout << dog;
    cout << endl;

    cout << "Cat: " << cat << endl;
    return 0; // terminate main()
}


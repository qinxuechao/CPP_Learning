//
// Created by Xuechao Qin on 3/28/2022.
//

#include "iostream"
#include "cstring"

int main() {
    using namespace std;
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;

    cout << animal << " and ";
    cout << bird << "\n";
    //cout << ps << "\n",  //may display garbage, may cause a cream

    cout << "Enter a kind of animal:";
    cin >> animal;
    // cin >> ps; Too horrible a blunder to try; ps doesn't point to allocated space

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  // get   new storage
    strcpy(ps, animal);
//    strcpy_s(ps, sizeof(animal) + 1, animal);
    cout << ps << " at " << (int *) ps << endl;
    delete ps;

    return 0;
}
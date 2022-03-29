//
// Created by xcqin on 3/29/2022.
//

#include "iostream"

int main() {
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // physically modify string object
    char temp;
    int i, j;

    for (j = 0, i = word.size() - 1; j < i; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}


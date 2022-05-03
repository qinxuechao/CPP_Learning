//
// Created by Xuechao Qin on 5/4/2022.
//

#include "iostream"
#include "fstream"
#include "string"

int main() {
    using namespace std;
    string filename;

    cout << "Enter name for new file: ";
    cin >> filename;

    // create output stream object for new file and call it fout
    ofstream fout(filename.c_str());

    fout << "For your eyes only\n";         // write to file
    cout << "Enter your secret number: ";   // write to screen
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();

    // creat input stream object for new file and call it fin
    ifstream fin(filename.c_str());
    cout << "Here are the contents of " << filename << ":\n";
    char ch;
    while (fin.get(ch))     // read character from file and write it to screen
        cout << ch;
    fin.close();

    return 0;
}

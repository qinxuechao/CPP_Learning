//
// Created by Xuechao Qin on 4/22/2022.
//

#include "iostream"
#include "fstream"
#include "string"
#include "filesystem"

int main() {
    using namespace std;

    cout << "Current working directory: " << std::filesystem::current_path() << endl;

    ifstream fin;
    fin.open("..\\ch16\\tobuy.txt");
    if (!fin.is_open()) {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin) {// while input is good
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done\n";
    fin.close();
    return 0;
}

//
// Created by xqin on 3/29/2022.
//

#include "iostream"
#include "ctime"

int main() {
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC;     // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)             // wait until time elapses
        cout << "time past: " << clock() - start << "ms" << endl;;               // note the semicolon
    cout << "done \a\n";

    return 0;
}


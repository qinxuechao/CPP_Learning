//
// Created by Xuechao Qin on 4/26/2022.
//

#include "iostream"
#include "valarray"
#include "cstdlib"

const int SIZE = 12;
typedef std::valarray<int> vint;    // simplify declarations
void show(const vint &v, int cols) {
    using std::cout;
    using std::endl;

    int lim = v.size();
    for (int i = 0; i < lim; i++) {
        cout.width(3);
        cout << v[i];
        if (i % cols == cols - 1)
            cout << endl;
        else
            cout << ' ';
    }
    if (lim % cols != 0)
        cout << endl;
}

int main() {
    using std::slice;
    using std::cout;
    vint valint(SIZE);  // think of as 4 rows of 3

    int i;
    for (i = 0; i < SIZE; ++i)
        valint[i] = std::rand() % 10;
    cout << "Original array:\n";
    show(valint, 3);                        // show in 3 column
    vint vcol(valint[slice(1, 4, 3)]); // extract 2nd column
    cout << "Second column:\n";
    show(vcol, 1);                          // show in 1 column
    vint vrow(valint[slice(3, 3, 1)]);   // extract 2nd row
    cout << "Second row:\n";
//    for (int i = 0; i < vrow.size(); i++) {
//        cout << "vrow[" << i << "] = " << vrow[i] << std::endl;
//    }
    show(vrow, 3);
    valint[slice(2, 4, 3)] = 10;            // assign to 2nd column
    cout << "Set last column to 10: \n";
    show(valint, 3);
    cout << "Set first colum to sum of next two:\n";
    valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)]) + vint(valint[slice(2, 4, 3)]);
    show(valint, 3);
    return 0;
}



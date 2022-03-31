//
// Created by xcqin on 3/31/2022.
//

#include "iostream"

const int Arsize = 8;

int sum_arr(int arr[], int n);

// Using std:: instead of using directive
int main() {
    int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // some system require preceding int with static to
    // enable array initialization
    std::cout << cookies << " = array address, ";
    // some systems require a type cast: unsigned (cookies)
    std::cout << sizeof(cookies) << " = sizeof cookies\n";
    int sum = sum_arr(cookies, Arsize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "First three eaters ate " << sum << std::endl;
    sum = sum_arr(cookies + 4, 4);
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

// return the sum of an integer array
int sum_arr(int arr[], int n) {
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof(arr) << " = sizeof arr\n";      // sizeof(arr) is the pointer length, 4 bit
    for (int i = 0; i < n; i++) {
        total = total + arr[i];
    }
    return total;
}

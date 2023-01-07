// for.cpp by Bill Weinman [bw.org]
// updated 2022-06-15
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    // should print 1 to 10
    for (const int &i: {1, 2, 3, 4, 5, 11, 7, 8, 9, 10}) {
        fmt::print("{} ", i);
    }

    // should print 1 to 10
    fmt::print("\n");
    // init an unsorted array
    const int arr[] = {11, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    const int *ptr = arr;
    /*
     * You cannot print the address of arr using fmt::print as it will produce a compile time error.
     * fmt::print("{} ", &arr); produces a compile time error.
     */
    std::cout << "Pointer of arr: " << &arr << ". Value of arr: " << *arr << std::endl;
    std::cout << "Pointer of ptr: " << &ptr << ". Value of ptr: " << *ptr << std::endl;
    /*
    other types of arrays, such as arrays of integers or floating-point numbers, do not have a null character at the
    end. These arrays do not have a built-in mechanism for marking the end of the array, so you will need to keep
    track of the length of the array yourself if you want to iterate over it.

    for (auto *p = arr; *p; p++) {
        fmt::print("{} ", *p);
    }
    */
    for (int i = 0; i < 10; i++) {
        fmt::print("{} ", arr[i]);
    }
    fmt::print("\n");
    // or init variable i using {} instead of 0
    for (int i {}; i < 10; i++) {
        fmt::print("{} ", arr[i]);
    }

    fmt::print("\n");
    // should print a to z
    for (char i = 'a'; i <= 'z'; i++) {
        fmt::print("{} ", i);
    }

    fmt::print("\n");
    const char chars[] {"string"};
    // should print s t r i n g
    for (auto *p = chars; *p; p++) {
        fmt::print("{} ", *p);
    }
}

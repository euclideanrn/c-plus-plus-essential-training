// pointers.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <iostream>
#include <fmt/format.h>

using fmt::format;
using std::cout;

int main() {
    int x{7};
    int y{42};
    int *ip = &x;

    cout << format("The value of x is {}\n", x);
    cout << format("The value of y is {}\n", y);
    cout << format("The value of *ip is {}\n", *ip);
}
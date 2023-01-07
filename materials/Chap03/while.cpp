// while.cpp by Bill Weinman [bw.org]
// updated 2022-06-15
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    int i {0};

    while (i < 5) {
        cout << format("element {} is {}\n", i, array[i]);
        ++i;
    }
}

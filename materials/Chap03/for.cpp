// for.cpp by Bill Weinman [bw.org]
// updated 2022-06-15
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };

    for (int i {0}; i < 5; ++i) {
        cout << format("element {} is {}\n", i, array[i]);
    }
}

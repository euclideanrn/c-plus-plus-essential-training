// template-function.cpp by Bill Weinman [bw.org]
// updated 2022-06-04
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

template<typename T>
T maxof(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int x {47};
    int y {73};
    auto z = maxof<int>(x, y);
    cout << format("max is {}\n", z);
    return 0;
}

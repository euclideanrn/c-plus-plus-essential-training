// statement.cpp by Bill Weinman [bw.org]
// updated 2022-05-19
#include <iostream>
#include <fmt/format.h>

using std::cout;
using fmt::format;

int main() {
    int x;
    x = 42;

    auto str = format("x is {}\n", x);
    cout << str;
}

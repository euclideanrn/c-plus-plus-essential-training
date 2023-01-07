// variables.cpp by Bill Weinman [bw.org]
// updated 2022-06-12
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

int main() {
    int i {};
    cout << format("i is {}\n", i);
}

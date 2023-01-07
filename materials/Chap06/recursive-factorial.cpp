// recursive-factorial.cpp by Bill Weinman <http://bw.org/>
// updated 2022-06-01
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

unsigned long factorial(unsigned long n) {
    if (n < 2) return 1;
    return n * factorial(n - 1);
}

int main() {
    unsigned long n {5};
    cout << format("Factorial of {} is {}\n", n, factorial(n));
}

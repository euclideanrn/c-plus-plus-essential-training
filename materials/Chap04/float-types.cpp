// float-types.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

// a byte is 8 bits
const size_t byte {8};

int main() {
    float f {};
    double df {};
    long double ldf {};
    
    cout << format("size of float f is {} bits\n", sizeof(f) * byte);
    cout << format("size of double df is {} bits\n", sizeof(df) * byte);
    cout << format("size of long double ldf is {} bits\n", sizeof(ldf) * byte);
}

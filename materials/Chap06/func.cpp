// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

void func() {
    cout << "this is func()\n";
}

int main() {
    cout << "this is main()\n";
    func();
}

// func.cpp by Bill Weinman [bw.org]
// updated 2022-05-23
#include <fmt/format.h>
#include <iostream>

using fmt::format;
using std::cout;

void func() {
     cout << "this is func()\n";
}

int main()
{
    cout << "this is main()\n";
    func();
}

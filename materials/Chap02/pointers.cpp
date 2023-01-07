// pointers.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <iostream>
#include <fmt/format.h>
#include <type_traits>

using fmt::format;
using std::cout;
using std::endl;

/*
 * A reference is a type of variable that acts as an alias for another variable. When you define a reference, you are
 * giving it a different name for an already existing variable. The reference is not a separate object in memory, and it
 * does not have its own memory address. Instead, it refers to the same memory location as the variable it is
 * referencing.
 *
 * A pointer, on the other hand, is a type of variable that stores the memory address of another variable. A pointer is
 * a separate object in memory, and it has its own memory address. When you define a pointer, you are creating a new
 * variable that stores the memory address of another variable.
 *å
 * Here are some key differences between references and pointers:
 * a) A reference must be initialized when it is defined, and it cannot be changed to refer to a different object after
 *    it is initialized. A pointer, on the other hand, can be initialized later and can be made to point to different
 *    objects at different times.
 * b) A reference is automatically dereferenced when it is used, so you do not need to use the dereference operator (*)
 *    to access the value it refers to. A pointer, on the other hand, must be dereferenced using the dereference
 *    operator to access the value it points to.
 * c) A reference cannot be null, because it must always refer to a valid object. A pointer, on the other hand, can be
 *    null to indicate that it is not currently pointing to a valid object.
 *
 *
 * Pointers are variables that store the address of another variable.
 * a) the address-of operator (&) returns a pointer to the variable it is applied to.
 * b) the dereference operator (*) returns the value of the variable pointed to by the pointer.
 * c) the pointer type is the type of the variable pointed to.
 */
int main() {
    int x{7};
    int y{42};
    int *ip = &x;
    int &a = x;

    /*
     * The reference a is initialized with the value of x, and it acts as an alias for x.
     *
     * a does not have its own memory address, instead, it shares the same memory address as
     * x.
     */
    int &a = x;

    /*
     * The pointer b is initialized with the memory address of x, and it can be used to access and manipulate the value
     * of x through its memory address.
     *
     * To assign the address of x to variable b, you must use the address-of operator (&) to get the memory address of
     * the variable x. The address-of operator returns a pointer to the variable it is applied to.
     *
     * You cannot assign the value of a variable to a pointer directly like: int *b = x;
     */
    int *b = &x;

    using type = std::remove_pointer<decltype(ip)>::type;
    cout << "Type of ip is: " << typeid(type).name() << endl;

    cout << format("The value of x is {}\n", x);
    cout << format("The value of y is {}\n", y);
    cout << format("The value of ++*ip is {}\n", ++ *ip);
    cout << format("The value of x is {}\n", x);
    cout << format("The value of ++a is {}\n", ++a);
    cout << format("The value of x is {}\n", x);
    cout << "The value of b is: " << *b << endl;
}
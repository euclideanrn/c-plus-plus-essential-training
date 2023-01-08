//
// Created by Evan Z on 1/8/23.
//
#include <iostream>

static void printAfterDeallocate() {
    int* p = new int;  // Dynamically allocate memory for an int on the heap
    *p = 42;

    /*
     * Deallocate memory for the int on the heap
     * But this statement is not guaranteed to be executed immediately
     */
    delete p;

    // this statement will produce undefined behavior (It is not defined in C++ standard)
    std::cout << "Pointer p: " << *p << std::endl;  //
}

int main() {
    printAfterDeallocate();
    return 0;
}
// Instructor_Lab1_Testcase.cpp
/*
Module: COMP H4204 - Games Engineering II
Lab 1: Arithmetic Operations – Instructor Test Cases

This file provides simple test cases to validate fixes from Student_Lab1.cpp.
*/

#include <cassert>
#include <iostream>
#include "arithmetic1.h" // Assuming the classes are defined in arithmetic.h

int main() {
    Arithmetic1 ar1;
    Arithmetic2 ar2;

    // Test Addition
    assert(ar1.add(10,5) == 15); // <BUG_1 would fail here>

    // Test Subtraction
    assert(ar1.subtract(10,5) == 5); // <BUG_2 would fail here>

    // Test Multiplication
    assert(ar2.multiply(10,5) == 50); // <BUG_3 would fail here>

    // Test Division
    assert(ar2.divide(10,5) == 2.0); // <BUG_4 would fail here>
    
    bool exceptionThrown = false;
    try {
        ar2.divide(10,3);
    }
    catch (const std::invalid_argument&) {
        exceptionThrown = true;
    }

    assert(exceptionThrown); // Ensure zero-division is handled
    std::cout << "[OK] All test cases passed!" << std::endl;
    return 0;
}

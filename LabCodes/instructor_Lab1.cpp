// Instructor_Lab1.cpp
/*
Module: COMP H4204 - Games Engineering II
Lab 1: Arithmetic Operations – Instructor Solution

This instructor version includes:
- Clean implementation of arithmetic functions.
- Detailed comments for each fixed bug (<BUG_x>).
- Notes for staff on how to guide students in debugging and documenting fixes.

Execution:
1) Compile: g++ -std=c++17 -Wall -Wextra Instructor_Lab1.cpp -o instructor_lab1
2) Run:     ./instructor_lab1
*/

#include <iostream>
#include <stdexcept>
using namespace std;

class Arithmetic1 {
public:
    // Addition
    int add(int a, int b) {
        return a + b; // <BUG_1 fixed: corrected operator from '-' to '+'>
    }

    // Subtraction
    int subtract(int a, int b) {
        return a - b; // <BUG_2 fixed: corrected operator from '+' to '-'>
    }
};

class Arithmetic2 {
public:
    // Multiplication
    int multiply(int a, int b) {
        return a * b; // <BUG_3 fixed: corrected operator from '/' to '*'>
    }

    // Division
    double divide(int a, int b) {
        if (b == 0) {
            throw invalid_argument("Division by zero"); // <BUG_4 fixed: added zero check>
        }
        return static_cast<double>(a) / b; // <BUG_4 fixed: cast to double to avoid integer truncation>
    }
};

int main() {
    Arithmetic1 ar1;
    Arithmetic2 ar2;

    int x = 10, y = 5;
    cout << "Addition (10+5): " << ar1.add(x,y) << endl;
    cout << "Subtraction (10-5): " << ar1.subtract(x,y) << endl;
    cout << "Multiplication (10*5): " << ar2.multiply(x,y) << endl;
    cout << "Division (10/5): " << ar2.divide(x,y) << endl;

    return 0;
}

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
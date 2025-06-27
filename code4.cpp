//Operators in cpp

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "Addition: " << (a + b) << endl; // Addition
    cout << "Subtraction: " << (a - b) << endl; // Subtraction
    cout << "Multiplication: " << (a * b) << endl; // Multiplication
    cout << "Division: " << (a / b) << endl; // Division
    cout << "Modulus: " << (a % b) << endl; // Modulus

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "Equal to: " << (a == b) << endl; // Equal to
    cout << "Not equal to: " << (a != b) << endl; // Not equal to
    cout << "Greater than: " << (a > b) << endl; // Greater than
    cout << "Less than: " << (a < b) << endl; // Less than
    cout << "Greater than or equal to: " << (a >= b) << endl; // Greater than or equal to
    cout << "Less than or equal to: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "Logical AND: " << ((a > 0) && (b > 0)) << endl; // Logical AND
    cout << "Logical OR: " << ((a > 0) || (b < 0)) << endl; // Logical OR
    cout << "Logical NOT: " << !(a < 0) << endl; // Logical NOT

    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "Bitwise AND: " << (a & b) << endl; // Bitwise AND
    cout << "Bitwise OR: " << (a | b) << endl; // Bitwise OR
    cout << "Bitwise XOR: " << (a ^ b) << endl; // Bitwise XOR
    cout << "Bitwise NOT: " << (~a) << endl; // Bitwise NOT
    cout << "Left Shift: " << (a << 1) << endl; // Left Shift
    cout << "Right Shift: " << (a >> 1) << endl; // Right Shift

    // Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    int c = a; // Assignment
    cout << "Assignment: " << c << endl; // Assignment
    c += b; // Add and assign
    cout << "Add and assign: " << c << endl; // Add and assign
    c -= b; // Subtract and assign
    cout << "Subtract and assign: " << c << endl; // Subtract and assign
    c *= b; // Multiply and assign
    cout << "Multiply and assign: " << c << endl; // Multiply and assign
    c /= b; // Divide and assign
    cout << "Divide and assign: " << c << endl; // Divide and assign
    c %= b; // Modulus and assign
    cout << "Modulus and assign: " << c << endl; // Modulus and assign

    // Datatype with operators
    cout << "\nDatatype with Operators:" << endl;
    double d = 5.5;
    cout << "Double Addition with integer: " << (d + a) << endl; // Double Addition with int
    cout << "Double Subtraction with integer: " << (d - b) << endl; // Double Subtraction with int
    cout << "Double Multiplication with integer: " << (d * a) << endl; // Double Multiplication with int
    cout << "Double Division with integer: " << (d / b) << endl; // Double Division with int

    return 0;
}
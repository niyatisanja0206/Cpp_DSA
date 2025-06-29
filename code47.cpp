//Bitwise Operations

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Bitwise AND
    int a = 6;  // 0101 in binary
    int b = 3;  // 0011 in binary
    cout << "Bitwise AND: " << (a & b) << endl; 
    // Bitwise OR
    cout << "Bitwise OR: " << (a | b) << endl; 
    // Bitwise XOR
    cout << "Bitwise XOR: " << (a ^ b) << endl; 
    // Bitwise NOT
    cout << "Bitwise NOT of a: " << (~a) << endl;    
    // Left Shift
    cout << "Left Shift a by 1: " << (a << 1) << endl; 
    // Right Shift
    cout << "Right Shift a by 1: " << (a >> 1) << endl; 
    return 0;
}
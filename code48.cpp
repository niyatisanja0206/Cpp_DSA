//Data type modifiers

#include <iostream>
using namespace std;

int main() {
    // Signed and Unsigned
    cout << "Signed int: " << sizeof(int) << " bytes" << endl; // Typically 4 bytes
    cout << "Unsigned int: " << sizeof(unsigned int) << " bytes" << endl; // Typically 4 bytes
    cout << "Signed short: " << sizeof(short) << " bytes" << endl; // Typically 2 bytes
    cout << "Unsigned short: " << sizeof(unsigned short) << " bytes" << endl; // Typically 2 bytes
    cout << "Signed long: " << sizeof(long) << " bytes" << endl; // Typically 4 or 8 bytes depending on the system
    cout << "Unsigned long: " << sizeof(unsigned long) << " bytes" << endl; // Typically 4 or 8 bytes depending on the system
    cout << "Signed long long: " << sizeof(long long) << " bytes" << endl; // Typically 8 bytes
    cout << "Unsigned long long: " << sizeof(unsigned long long) << " bytes" << endl; // Typically 8 bytes         
    return 0;
}
//Find if number is power of 2 without using loops or recursion using bitwise operations

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // A number is a power of 2 if it is greater than 0 and the bitwise AND of the number and its predecessor is 0
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    return 0;
}
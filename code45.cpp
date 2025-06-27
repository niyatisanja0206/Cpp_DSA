//Decimal to Binary Conversion: The program converts a decimal number to its binary representation without array or vector.

#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }
    
    int binary = 0, base = 1;
    while (n > 0) {
        int lastDigit = n % 2;
        binary += lastDigit * base;
        n /= 2;
        base *= 10;
    }
    
    cout << binary;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        cout << "Binary representation of " << n << " is: ";
        decimalToBinary(n);
        cout << endl;
    }
    
    return 0;
}
//Binary to Decimal Conversion: The program converts a binary number to its decimal representation without array or vector.

#include <iostream>
using namespace std;

int binaryToDecimal(int n) {
    int decimal = 0, base = 1;

    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * base;
        n /= 10;
        base *= 2;
    }

    return decimal;
}

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        int decimal = binaryToDecimal(n);
        cout << "Decimal representation of " << n << " is: " << decimal << endl;
    }

    return 0;
}
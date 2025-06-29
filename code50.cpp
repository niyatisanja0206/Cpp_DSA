//Write a funtion to reverse digits of a number 

#include <iostream>
using namespace std;

unsigned int reverseDigits(unsigned int n) {
    unsigned int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    unsigned int number;
    cout << "Enter a number: ";
    cin >> number;

    unsigned int reversedNumber = reverseDigits(number);
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
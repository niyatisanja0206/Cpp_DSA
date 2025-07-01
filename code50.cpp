//Write a funtion to reverse digits of a number for positive and negative integers.

#include <iostream>
using namespace std;

int reverseDigits(int x) {
    // Check if the input number is negative
    if (x < 0) {
        return -reverseDigits(-x); // If negative, reverse the absolute value and return negative
    }
        
    // Initialize the reversed number
    int ans = 0; // Initialize the reversed number to 0
    while (x != 0) {
        int digit = x % 10; // Get the last digit of x
            
        // Check for overflow/underflow before updating ans
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
            return 0; // Return 0 if reversing x would cause overflow/underflow
        }
            
            ans = ans * 10 + digit; // Append the digit to the reversed number
            x = x / 10; // Remove the last digit from x
        }
        return ans; // Return the reversed number
}

int main() {
    unsigned int number;
    cout << "Enter a number: ";
    cin >> number;

    unsigned int reversedNumber = reverseDigits(number);
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}
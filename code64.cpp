//Return reverse of a number without converting it to a string and check if it is a palindrome

#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = (reversed * 10) + (num % 10); // Append the last digit
        num /= 10; // Remove the last digit
    }
    return reversed;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num); // Check if the number is equal to its reverse
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int reversed = reverseNumber(number);
    cout << "Reversed number: " << reversed << endl;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
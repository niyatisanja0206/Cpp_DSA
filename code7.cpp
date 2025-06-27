//Conditional statements-2 : using else if ladder to check the range of a number

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number; // User input for the integer

    // Check the range of the number using else if ladder
    if (number < 0) {
        cout << number << " is negative." << endl; // Output if the number is negative
    } else if (number == 0) {
        cout << "The number is zero." << endl; // Output if the number is zero
    } else if (number > 0 && number <= 10) {
        cout << number << " is positive and in the range of 1 to 10." << endl; // Output for positive numbers in range
    } else {
        cout << number << " is positive and greater than 10." << endl; // Output for positive numbers greater than 10
    }

    return 0;
}
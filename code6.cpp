//Conditional Statements -1: Normal if-else for checking if a number is even or odd

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number; // User input for the integer

    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is even." << endl; // Output if the number is even
    } else {
        cout << number << " is odd." << endl; // Output if the number is odd
    }

    return 0;
}
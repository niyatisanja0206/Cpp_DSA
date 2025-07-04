//code to check if a 3 digit number is armstrong or not

#include <iostream>

using namespace std;

bool isArmstrong(int num) {
    if (num < 100 || num > 999) {
        return false; // Not a 3-digit number
    }
    
    int originalNum = num;
    int sum = 0;

    // Calculate the sum of the cubes of the digits
    while (originalNum > 0) {
        int digit = originalNum % 10;
        sum += digit * digit * digit; // Cube the digit
        originalNum /= 10; // Remove the last digit
    }

    return sum == num; // Check if the sum equals the original number
}

int main() {
    int number;
    cout << "Enter a 3-digit integer: ";
    cin >> number;

    if (number < 100 || number > 999) {
        cout << "Please enter a valid 3-digit integer." << endl;
        return 1;
    }

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

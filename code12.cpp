//Loops-2: For loop to calculate the factorial of a number

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // Use long long to handle larger factorials

    cout << "Enter a positive integer: ";
    cin >> n; // User input for the number

    // Using a for loop to calculate the factorial
    for (int i = 1; i <= n; ++i) {
        factorial *= i; // Multiply current number to factorial
    }

    cout << "Factorial of " << n << " is " << factorial << endl; // Output the result

    return 0;
}
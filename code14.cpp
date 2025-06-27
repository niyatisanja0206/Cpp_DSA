//Loop-4: Using for loop to find the factorial of a number n

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // Use long long to handle larger factorials

    cout << "Enter a positive integer: ";
    cin >> n; // User input for the number

    // Using a for loop to calculate the factorial
    // for(int i = 1; i<n; i++)
    for (int i = 2; i <= n; ++i) {
        factorial *= i; // Multiply current number to factorial
    }

    cout << "Factorial of " << n << " is " << factorial << endl; // Output the result

    return 0;
}
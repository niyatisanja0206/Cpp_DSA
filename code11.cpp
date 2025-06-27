//Loops-1: While loop to sum numbers from 1 to n

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a positive integer: ";
    cin >> n; // User input for the upper limit

    // Using a while loop to calculate the sum of numbers from 1 to n
    while (i <= n) {
        sum += i; // Add current number to sum
        i++; // Increment the counter
    }

    cout << "The sum of numbers from 1 to " << n << " is " << sum << endl; // Output the result

    return 0;
}
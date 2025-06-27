//Loop-3: Using a do-while loop to print numbers from 1 to n

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n; // User input for the upper limit

    int i = 1; // Initialize counter
    // Using a do-while loop to print numbers from 1 to n
    do {
        cout << i << " "; // Print current number
        i++; // Increment the counter
    } while (i <= n); // Continue until i exceeds n

    cout << endl; // New line after printing all numbers
    return 0;
}
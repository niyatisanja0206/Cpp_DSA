//Loop-5: Using for loop to check if the number is prime or not

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true; // Assume the number is prime initially

    cout << "Enter a positive integer: ";
    cin >> n; // User input for the number

    if (n <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 to the square root of n
        for (int i = 2; i*i <= n; ++i) {
            if (n % i == 0) {
                isPrime = false; // Found a factor, so it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl; // Output if it's prime
    } else {
        cout << n << " is not a prime number." << endl; // Output if it's not prime
    }

    return 0;
}
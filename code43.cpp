//Print prime numbers from 1 to n

#include <iostream>
using namespace std;

void printPrimes(int n) {
    if (n < 2) {
        return; // No primes less than 2
    }
    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;    
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false; // i is divisible by j, hence not prime
                break;
            }
        }
        if (isPrime) {
            cout << i << " "; // Print the prime number
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
    }
    else {
        printPrimes(n);
    }
    return 0;
}
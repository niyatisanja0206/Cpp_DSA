//Check if number is prime using function

#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // n is divisible by i, hence not prime
        }
    }
    return true; // n is prime
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
    }
    else {
        if (isPrime(n)) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is not a prime number." << endl;
        }
    }
    return 0;

}
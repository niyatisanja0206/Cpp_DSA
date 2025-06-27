//Calculate the sum of the digits of a number using recursion

#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    }
    else {
        int result = sumOfDigits(n);
        cout << "The sum of the digits of " << n << " is: " << result << endl;
    }
    return 0;
}
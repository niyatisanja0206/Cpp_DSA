//Factorial calculation using recursion

#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
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
        int result = factorial(n);
        cout << "The factorial of " << n << " is: " << result << endl;
    }
    return 0;
}
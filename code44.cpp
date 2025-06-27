//Give nth fibonacci number using recursion

#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Base case for n = 0
    } else if (n == 1) {
        return 1; // Base case for n = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
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
        int result = fibonacci(n);
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }
    return 0;
}
//sum 1 to n numbers without for loop or recursion

#include <iostream>
using namespace std;

int sum(int n) {
    return n * (n + 1) / 2; // Using the formula for the sum of the first n natural numbers
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int result = sum(n);
    cout << "The sum of the first " << n << " natural numbers is: " << result << endl;

    return 0;
}
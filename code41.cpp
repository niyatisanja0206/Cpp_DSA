//Calculate nCr

#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int ncr(int n, int r) {
    if (r > n) {
        return 0; // nCr is not defined for r > n
    }
    if (r == 0 || r == n) {
        return 1; // nC0 = nCn = 1
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter values for n and r (n >= r >= 0): ";
    cin >> n >> r;

    if (n < 0 || r < 0 || r > n) {
        cout << "Please enter non-negative integers with n >= r." << endl;
    }
    else {
        int result = ncr(n, r);
        cout << "The value of " << n << "C" << r << " is: " << result << endl;
    }
    return 0;
}
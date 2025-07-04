#include<iostream>
using namespace std;

int alternateDigitSum(int n) {
        int arr[10]; // Since n <= 10^9, max 10 digits
        int count = 0;

        // Extract digits and store in reverse order
        while (n > 0) {
            arr[count++] = n % 10;
            n /= 10;
        }

        // Reverse the array to get original digit order
        for (int i = 0; i < count / 2; i++) {
           swap(arr[i],arr[count-i-1]);
        }

        int sum = 0;
        for (int i = 0; i < count; i++) {
            if (i % 2 == 0)
                sum += arr[i];  // even index → positive
            else
                sum -= arr[i];  // odd index → negative
        }

        return sum;
    }
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n; // User input for the number
    int result = alternateDigitSum(n); // Calculate the alternate digit sum
    cout << "The alternate digit sum of " << n << " is " << result << endl; // Output the result
    return 0;      
}
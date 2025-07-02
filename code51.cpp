//Implementation of a simple array to take input from the user and print it out

#include<iostream>
using namespace std;

int main() {
    int SIZE; // Define the size of the array

    cin >> SIZE; // Read the size of the array from user input
    if (SIZE <= 0) {    
        cout << "Size must be a positive integer." << endl;
        return 1; // Exit if the size is not positive
    }

    int arr[SIZE]; // Declare an array of integers

    // Input elements into the array
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Output the elements of the array
    cout << "You entered:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


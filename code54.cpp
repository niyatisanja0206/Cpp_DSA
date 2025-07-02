//Reverse an array basic using another array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int reversed[size]; // Create a new array to hold the reversed elements
    for (int i = 0; i < size; i++) {
        reversed[i] = arr[size - 1 - i]; // Fill the new array with elements in reverse order
    }
    // Return the reversed array without coping it back to the original array
    for (int i = 0; i < size; i++) {
        cout << reversed[i] << " "; // Print the reversed array
    }
}

int main() {
    int SIZE; // Define the size of the array

    cout << "Enter the size of the array: ";
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

    // Reverse and output the array
    cout << "Reversed array: ";
    reverseArray(arr, SIZE);
    cout << endl;

    return 0;
}
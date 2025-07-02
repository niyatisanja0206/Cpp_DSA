//Print unique values from an array without using set or map

#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    bool isUnique;
    for (int i = 0; i < size; i++) {
        isUnique = true; // Assume the current element is unique
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) { // Check for duplicates
                isUnique = false; // Found a duplicate
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " "; // Print the unique element
        }
    }
    cout << endl; // New line after printing all unique values
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

    // Print unique values from the array
    cout << "Unique values in the array: ";
    printUniqueValues(arr, SIZE);

    return 0;
}
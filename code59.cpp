//print unique value from an array using set

#include <iostream>
#include <set>

using namespace std;
void printUniqueValues(int arr[], int size) {
    set<int> uniqueValues; // Create a set to store unique values
    for (int i = 0; i < size; i++) {
        uniqueValues.insert(arr[i]); // Insert each element into the set
    }
    
    // Print all unique values
    cout << "Unique values in the array: ";
    for (const auto& value : uniqueValues) {
        cout << value << " "; // Output each unique value
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
    printUniqueValues(arr, SIZE);

    return 0;
}
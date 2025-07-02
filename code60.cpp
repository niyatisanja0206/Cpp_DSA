//Print intersection of two arrays without using set or map

#include <iostream>
using namespace std;

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) { // Check if elements are equal
                cout << arr1[i] << " "; // Print the common element
                break; // Break to avoid printing duplicates from arr1
            }
        }
    }
    cout << endl; // New line after printing all intersections
}

int main() {
    int SIZE1, SIZE2; // Define the sizes of the two arrays

    cout << "Enter the size of the first array: ";
    cin >> SIZE1; // Read the size of the first array
    if (SIZE1 <= 0) {    
        cout << "Size must be a positive integer." << endl;
        return 1; // Exit if the size is not positive
    }

    int arr1[SIZE1]; // Declare the first array

    // Input elements into the first array
    cout << "Enter " << SIZE1 << " integers for the first array:" << endl;
    for (int i = 0; i < SIZE1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> SIZE2; // Read the size of the second array
    if (SIZE2 <= 0) {    
        cout << "Size must be a positive integer." << endl;
        return 1; // Exit if the size is not positive
    }

    int arr2[SIZE2]; // Declare the second array

    // Input elements into the second array
    cout << "Enter " << SIZE2 << " integers for the second array:" << endl;
    for (int i = 0; i < SIZE2; i++) {
        cin >> arr2[i];
    }

    // Print intersection of both arrays
    printIntersection(arr1, SIZE1, arr2, SIZE2);

    return 0;
}   
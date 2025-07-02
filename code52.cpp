//Find smallest and largest values of an array with their indexes

#include <iostream>
#include <limits>
#include <tuple>
using namespace std;

pair<int, int> smallest(int arr[], int size) {
    int min = INT_MAX;
    int minIndex = -1; // Initialize minIndex to -1
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i; // Update minIndex when a new minimum is found
        }
    }
    return make_pair(min, minIndex); // Return both the smallest value and its index
}

pair<int, int> largest(int arr[], int size) {
    int max = INT_MIN;
    int maxIndex = -1; // Initialize maxIndex to -1
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i; // Update maxIndex when a new maximum is found
        }
    }
    return make_pair(max, maxIndex); // Return both the largest value and its index
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

    // Find and output the smallest and largest elements
    int minValue, minIndex;
    tie(minValue, minIndex) = smallest(arr, SIZE);
    cout << "Smallest value: " << minValue << " at index: " << minIndex << endl;
    int maxValue, maxIndex;
    tie(maxValue, maxIndex) = largest(arr, SIZE);
    cout << "Largest value: " << maxValue << " at index: " << maxIndex << endl;

    return 0;
}
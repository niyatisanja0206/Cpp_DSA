//sum & product of all numbers in an array

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to the sum
    }
    return sum; // Return the total sum
}

int productArray(int arr[], int size) {
    int product = 1; // Initialize product to 1
    for (int i = 0; i < size; i++) {
        product *= arr[i]; // Multiply each element to the product
    }
    return product; // Return the total product
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

    // Calculate and output the sum and product of the array
    int totalSum = sumArray(arr, SIZE);
    int totalProduct = productArray(arr, SIZE);
    
    cout << "Sum of all elements: " << totalSum << endl;
    cout << "Product of all elements: " << totalProduct << endl;

    return 0;
}
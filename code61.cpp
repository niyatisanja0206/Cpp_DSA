//Simple implementation of vectors

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; // Declare a vector of integers

    int SIZE; // Define the size of the vector
    cout << "Enter the size of the vector: ";
    cin >> SIZE; // Read the size from user input
    if (SIZE <= 0) {    
        cout << "Size must be a positive integer." << endl;
        return 1; // Exit if the size is not positive
    }

    // Input elements into the vector
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        int value;
        cin >> value; // Read each integer
        vec.push_back(value); // Add it to the vector
    }

    // Output all elements in the vector
    cout << "Elements in the vector: ";
    for (const auto& elem : vec) {
        cout << elem << " "; // Print each element
    }
    cout << endl; // New line after printing all elements

    return 0;
}
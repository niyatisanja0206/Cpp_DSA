//implementation of inbuilt functions of vector like push_back, pop_back, size, clear, empty, front, back, at, insert, erase and sort

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec; // Declare a vector of integers

    // Adding elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    
    cout << "Vector after push_back: ";
    for (const auto& elem : vec) {
        cout << elem << " "; // Print each element
    }
    cout << endl;

    // Accessing the first and last elements
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;

    // Size of the vector
    cout << "Size of vector: " << vec.size() << endl;

    // Inserting an element at a specific position
    vec.insert(vec.begin() + 1, 15); // Insert 15 at index 1
    cout << "Vector after insert: ";
    for (const auto& elem : vec) {
        cout << elem << " "; // Print each element
    }
    cout << endl;

    // Erasing an element
    vec.erase(vec.begin() + 2); // Erase element at index 2
    cout << "Vector after erase: ";
    for (const auto& elem : vec) {
        cout << elem << " "; // Print each element
    }
    cout << endl;

    // Sorting the vector
    sort(vec.begin(), vec.end());
    cout << "Vector after sort: ";
    for (const auto& elem : vec) {
        cout << elem << " "; // Print each element
    }
    cout << endl;

    // Checking if the vector is empty
    if (vec.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    // Clearing the vector
    vec.clear();
    cout << "Vector after clear, size: " << vec.size() << endl;

    return 0;
}
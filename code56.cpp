//Reverse an array using two pointers approach

#include <iostream>
using namespace std;

void reversed(int arr[], int s){
    int s = 0;
    int e = s - 1;
    while(s<e){
        swap(arr[s], arr[e]); // Swap elements at positions s and e
        s++;
        e--;
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

    // Reverse the array using two pointers approach
    reversed(arr, SIZE);

    // Output the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
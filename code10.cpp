//Conditional statement application: Find character type (vowel, consonant, digit, or special character)

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch; // User input for the character

    // Check if the character is a vowel, consonant, digit, or special character
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << ch << " is a vowel." << endl; // Output if it's a vowel
        } else {
            cout << ch << " is a consonant." << endl; // Output if it's a consonant
        }
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl; // Output if it's a digit
    } else {
        cout << ch << " is a special character." << endl; // Output for special characters
    }

    return 0;
}
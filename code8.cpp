//Conditional statements -3: Using nested if-else to check if a person is aligible to vote based on age and citizenship

#include <iostream>
using namespace std;

int main(){
    int age;
    string citizenship;

    cout << "Enter your age: ";
    cin >> age; // User input for age
    cout << "Enter your citizenship (yes/no): ";
    cin >> citizenship; // User input for citizenship

    // Check if the person is eligible to vote
    if (age >= 18) {
        if (citizenship == "yes") {
            cout << "You are eligible to vote." << endl; // Output if eligible
        } else {
            cout << "You must be a citizen to vote." << endl; // Output if not a citizen
        }
    } else {
        cout << "You must be at least 18 years old to vote." << endl; // Output if underage
    }

    return 0;
}
//Conditional statements-4: Using switch-case to determine the day of the week based on user input

#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    cin >> day; // User input for the day number

    // Determine the day of the week using switch-case
    switch (day) {
        case 1:
            cout << "Monday" << endl; // Output for Monday
            break;
        case 2:
            cout << "Tuesday" << endl; // Output for Tuesday
            break;
        case 3:
            cout << "Wednesday" << endl; // Output for Wednesday
            break;
        case 4:
            cout << "Thursday" << endl; // Output for Thursday
            break;
        case 5:
            cout << "Friday" << endl; // Output for Friday
            break;
        case 6:
            cout << "Saturday" << endl; // Output for Saturday
            break;
        case 7:
            cout << "Sunday" << endl; // Output for Sunday
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl; // Output for invalid input
    }

    return 0;
}
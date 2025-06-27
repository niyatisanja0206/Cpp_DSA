//Tarnary operator

#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int max = (a > b) ? a : b;
    cout << "The maximum value is: " << max << endl;
    return 0;
}
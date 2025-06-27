//Variables and datatypes in cpp

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 5; // Integer variable
    double b = 3.14; // Double variable
    float f = 2.718f; // Float variable
    char c = 'A'; // Character variable
    string d = "Hello"; // String variable
    bool isCpp14 = true; // Boolean variable

    cout << "Integer: " << a << endl;
    cout << "Double: " << b << endl;
    cout << "Float: " << f << endl;
    cout << "Character: " << c << endl;
    cout << "String: " << d << endl;
    cout << "Boolean (C++14): " << (isCpp14 ? "true" : "false") << endl;

    return 0;
}
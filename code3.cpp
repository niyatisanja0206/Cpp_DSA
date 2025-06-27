//Type casting in cpp

#include <iostream>
using namespace std;

int main(){

    int a = 10; // Integer variable
    double b = 5.5; // Double variable

    // Implicit type casting (widening conversion)
    double c = a; // int to double
    cout << "Implicit type casting (int to double): " << c << endl;

    // Explicit type casting (narrowing conversion)
    int d = (int)b; // double to int
    cout << "Explicit type casting (double to int): " << d << endl;

    // Type casting using static_cast
    double e = static_cast<double>(a); // int to double
    cout << "Type casting using static_cast (int to double): " << e << endl;

    return 0;
}
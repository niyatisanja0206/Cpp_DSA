//Triangle Pattern-7

/*
For n=3
A 
B C
D E F
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 
      
    char ch = 'A'; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << ch << " "; 
            ch++;
        }
        cout << endl; 
    }
}
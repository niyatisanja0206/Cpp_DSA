//Triangle pattent-3

/*
For n=4
A 
B B
C C C
D D D D
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
        }
        cout << endl;
        ch++;
    }
}
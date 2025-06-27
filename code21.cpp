//Square pattern-5
/*for n=3
A B C 
D E F
G H I
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    char ch = 'A';

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
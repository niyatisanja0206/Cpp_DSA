//Square pattern-3
/*for n=6
A B C D E F 
A B C D E F
A B C D E F
A B C D E F
A B C D E F
A B C D E F
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        char ch='A';
        for(int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
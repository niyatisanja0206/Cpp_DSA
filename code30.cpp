//Triangle Pattern-9: 

#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

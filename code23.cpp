//Triangle pattent-2

/*
For n=4
1 
2 2
3 3 3
4 4 4 4
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
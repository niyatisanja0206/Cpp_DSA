//Triagle Pattern-4

/*
For n=4
1 
1 2
1 2 3
1 2 3 4
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num = 1;
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
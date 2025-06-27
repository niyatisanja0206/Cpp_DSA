//Triangle Pattern with Numbers and Alphabets

/*
for n=4
1 A 
1 2 A B 
1 2 3 A B C 
1 2 3 4 A B C D 
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num = 1;
        char ch = 'A';
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        for(int j=0; j<=i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
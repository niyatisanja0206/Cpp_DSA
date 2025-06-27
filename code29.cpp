//Triangle Pattern-8:Backward numbers in triangle

/*
for n=3
1
2 1
3 2 1*/

#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num = i + 1;
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}


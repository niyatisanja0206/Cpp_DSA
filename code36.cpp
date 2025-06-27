//Pyramid Pattern-2

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        int num1 = 1;
        int num2 = i-1;
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << num1;
            num1++;
        }
        for(int j = 2; j <= i; j++) {
            cout << num2;
            num2--;
        }
        cout << endl;
    }
}
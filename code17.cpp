//Square pattern-1
/* for n=3
1 2 3
1 2 3
1 2 3 
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
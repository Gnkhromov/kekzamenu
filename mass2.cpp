#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]='.';
        }
    }
    for (int i=0; i<n; i++) {
        arr[n/2][i]='*';
        arr[i][n/2]='*';
        arr[i][i]='*';
        arr[i][n-i-1]='*';
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
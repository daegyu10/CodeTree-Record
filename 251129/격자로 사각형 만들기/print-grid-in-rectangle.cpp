#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int arr[a][a] = {};

    for(int i = 0; i < a; i++) {
        arr[0][i] = 1;
        arr[i][0] = 1;
    }

    for(int i = 1; i < a; i++) {
        for(int j = 1; j < a; j++) {
            arr[i][j] = (arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1]);
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;

    int arr[a][a] = {};


    for(int i = 0; i < a; i++) {
        for(int j = 0; j <= i; j++) {
            if(i == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
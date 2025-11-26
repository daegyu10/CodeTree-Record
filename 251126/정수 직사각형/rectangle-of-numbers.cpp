#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int b;
    int count = 1;
    cin >> a >> b;

    int arr[a][b] = {};

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            arr[i][j] = count;
            count++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
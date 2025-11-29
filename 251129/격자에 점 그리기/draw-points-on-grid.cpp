#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr_n;
    int coin_n;
    cin >> arr_n >> coin_n;

    int arr[arr_n][arr_n] = {};
    int a;
    int b;

    for(int i = 1; i <= coin_n; i++) {
        cin >> a >> b;
        arr[a-1][b-1] = i;
    }

    for(int i = 0; i < arr_n; i++) {
        for(int j = 0; j < arr_n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
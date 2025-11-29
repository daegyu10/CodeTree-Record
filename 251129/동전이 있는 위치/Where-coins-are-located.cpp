#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr_size;
    int coin_num;
    cin >> arr_size >> coin_num;

    int a;
    int b;

    int arr[arr_size][arr_size] = {};
    for(int i = 0; i < coin_num; i++) {
        cin >> a >> b;
        arr[a-1][b-1] = 1;
    }

    for(int i = 0; i < arr_size; i++) {
        for(int j = 0; j < arr_size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
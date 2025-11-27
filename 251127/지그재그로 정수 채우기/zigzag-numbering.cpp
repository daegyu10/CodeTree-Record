#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.
    int num = 0;
    int arr[n][m] = {};

    for(int i = 0; i < m; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; j++) {
                arr[j][i] = num;
                num++;
            }
        } else {
            for(int j = n-1; j >= 0; j--) {
                arr[j][i] = num;
                num++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

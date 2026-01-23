#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[201][201] = {};
    for(int i = 0; i < n; i++) {
        int x1, y1;
        cin >> x1 >> y1;
        for(int j = x1; j < x1+8; j++) {
            for(int k = y1; k < y1+8; k++) {
                arr[j][k] = 1;
            }
        }
    }

    int count = 0;
    for(int i = 0; i < 201; i++) {
        for(int j = 0; j < 201; j++) {
            if(arr[i][j] == 1) {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n][n] = {};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max_count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-2; j++) {
            max_count = max(max_count, arr[i][j] + arr[i][j+1] + arr[i][j+2]);
        }
    }

    cout << max_count;
    return 0;
}
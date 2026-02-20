#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>

int main() {
    // Please write your code here.
    int n, r;
    cin >> n >> r;
    int arr[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_num = INT_MIN;
    for(int i = 0; i <= n-r; i++) {
        int sum = 0;
        for(int j = i; j < i+r; j++) {
            sum += arr[j];
        }
        max_num = max(sum, max_num);
    }

    cout << max_num;
    return 0;
}
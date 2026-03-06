#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int arr[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num = -1;
    int max_num = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j] && abs(i-j) <= k) {
                num = arr[i];
            }
            max_num = max(max_num, num);
        }
    }

    cout << max_num;
    return 0;
}
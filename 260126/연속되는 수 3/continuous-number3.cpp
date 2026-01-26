#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[n] = {};
    int count = 0;
    int cnt = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i == 0 || (arr[i]*arr[i-1]) < 0) {
            count = 1;
        } else if(arr[i] * arr[i-1] > 0) {
            count++;
        }

        if(cnt < count) {
            cnt = count;
        }
    }

    cout << cnt;
    return 0;
}
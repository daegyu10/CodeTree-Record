#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, t;
    cin >> n >> t;

    int arr[n] = {};
    int count = 0;
    int max_count = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i >= 1 && arr[i] > t) {
            count++;
        } else {
            count = 0;
        }

        if(max_count < count) {
            max_count = count;
        }
    }

    cout << max_count;
    return 0;
}
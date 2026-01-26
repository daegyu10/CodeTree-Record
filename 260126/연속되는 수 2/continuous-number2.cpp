#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};

    int count = 0;
    int max_count = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i == 0 || arr[i] != arr[i-1]) {
            count = 1;
        } else if(arr[i] == arr[i-1]) {
            count++;
        }

        if(max_count < count) {
            max_count = count;
        }
    }

    cout << max_count;
    return 0;
}
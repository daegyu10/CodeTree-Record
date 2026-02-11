#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(i < j && j < k) {
                    if(arr[i] <= arr[j] && arr[j] <= arr[k]) {
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}
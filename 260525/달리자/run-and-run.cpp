#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr1[n] = {};
    int arr2[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    int dist = 0;
    for(int i = n-1; i > 0; i--) {
        int tmp_dist = 0;
        int diff = 0;
        
        diff = arr2[i] - arr1[i];
        arr1[i-1] -= diff;
        dist += diff;
    }
    cout << dist;
    return 0;
}
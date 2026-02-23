#include <iostream>
using namespace std;
#include <climits>
#include <algorithm>

int main() {
    // Please write your code here.
    int n, h, t;
    cin >> n >> h >> t;

    int arr[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_cost = INT_MAX;
    for(int i = 0; i <= n-t; i++) {
        int cost = 0;
        for(int j = i; j < i+t; j++) {
            if(arr[j] < h) {
                cost += abs(h-arr[j]);
            } else if(arr[j] > h) {
                cost += abs(arr[j]-h);
            }
        }
        min_cost = min(cost, min_cost);
    }

    cout << min_cost;
    return 0;
}
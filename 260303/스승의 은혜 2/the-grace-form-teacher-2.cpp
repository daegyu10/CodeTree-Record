#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n, cost;
    cin >> n >> cost;
    int arr[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr+n);

    int max_count = 0;
    for(int i = 0; i < n; i++) {
        int count = 0;
        int total_cost = 0;
        for(int j = 0; j < n; j++) {

            if(i == j) {
                total_cost += arr[j]/2;
            } else {
                total_cost += arr[j];
            }

            if(total_cost > cost) {
                break;
            }
            count++;
        }
        
        max_count = max(max_count, count);
    }

    cout << max_count;
    return 0;
}
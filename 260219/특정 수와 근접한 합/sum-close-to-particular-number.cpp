#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int main() {
    // Please write your code here.
    int n, sum;
    cin >> n >> sum;

    int arr[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minimal = INT_MAX;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            int temp1 = arr[i];
            int temp2 = arr[j];
            arr[i] = 0;
            arr[j] = 0;
            int sum_n = 0;

            for(int k = 0; k < n; k++) {
                sum_n += arr[k];
            }
            minimal = min(minimal, abs(sum - sum_n));
            arr[i] = temp1;
            arr[j] = temp2;
        }
    }

    cout << minimal;
    return 0;
}
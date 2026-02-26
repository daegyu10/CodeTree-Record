#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>

int main() {
    // Please write your code here.
    int arr[6] = {};
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+6);

    //2 3 6 7 8 10
    int max_a = INT_MIN;
    int min_a = INT_MAX;

    for(int i = 0; i < 3; i++) {
        int sum = arr[i] + arr[5-i];
        max_a = max(max_a, sum);
        min_a = min(min_a, sum);
    }

    cout << max_a - min_a;
    return 0;
}
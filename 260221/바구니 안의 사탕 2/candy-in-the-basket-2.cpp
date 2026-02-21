#include <iostream>
using namespace std;
#include <climits>

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    int can_num;
    int position;
    int arr[100] = {};
    for(int i = 0; i < n; i++) {
        cin >> can_num;
        cin >> position;
        arr[position-1] += can_num;
    }

    int max_num = INT_MIN;
    for(int i = 0; i <= 100-2*k; i++) {
        int count = 0;
        for(int j = i; j < i+(2*k); j++) {
            count += arr[j];
        }
        max_num = max(max_num, count);
    }

    cout << max_num;
    return 0;
}
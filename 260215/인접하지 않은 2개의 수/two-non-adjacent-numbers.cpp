#include <iostream>
using namespace std;
#include <climits>

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num_max = INT_MIN;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i+1; j < n; j++) {

            if(j != i+1) {
                sum = arr[i] + arr[j];
            }

            if(sum > num_max) {
                num_max = sum;
            }
        }
    }

    cout << num_max;
    return 0;
}
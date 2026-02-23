#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[3] = {};
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                if(abs(arr[0]-i) <= 2 || abs(arr[1]-j) <= 2 || abs(arr[2]-k) <= 2) {
                    count++;
                }
            }
        }
    }

    cout << count;
    return 0;
}
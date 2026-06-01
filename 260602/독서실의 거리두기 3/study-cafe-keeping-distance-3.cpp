#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    string input;
    int arr[n] = {};
    cin >> input;
    for(int i = 0; i < n; i++) {
        arr[i] = input[i] - '0';
    }

    int dist = 0;
    int max_dist = 0;
    int idx_min = 0;
    int idx_max = 0;
    bool first = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            if(first == false) {
                first = true;
            } else {
                dist++;
                if(max_dist < dist) {
                    max_dist = dist;
                    idx_max = i;
                    idx_min = i - dist;
                    dist = 0;
                } else {
                    dist = 0;
                }
            }
        } else {
            dist++;
        }
    }

    int diff = (idx_max - idx_min) / 2;
    arr[idx_min + diff] = 1;
    first = false;
    int ans = 1000;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            if(first == false) {
                first = true;
            } else {
                dist++;
                ans = min(ans, dist);
                dist = 0;
            }
        } else {
            dist++;
        }
    }

    cout << ans;
    return 0;
}
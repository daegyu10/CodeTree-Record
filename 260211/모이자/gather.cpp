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

    int min_dir = 100000; //최대가 100개 집, 100명. 최대는 10만 시간으로 잡음.

    for(int i = 0; i < n; i++) {
        int dir = 0;
        for(int j = 0; j < n; j++) {
            dir += arr[j] * abs(j-i);
        }
        if(dir < min_dir) {
            min_dir = dir;
        }
    }

    cout << min_dir;
    return 0;
}
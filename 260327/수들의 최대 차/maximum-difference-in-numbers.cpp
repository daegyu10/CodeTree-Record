#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int arr[n] = {};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //간단하게 가자. arr를 sort하고, 맨 처음부터 잡으면서 max count 세기.

    int max_count = 0;
    for(int i = 0; i < n; i++) {
        int count = 1; //스스로를 골랐으니 count는 1.
        for(int j = i+1; j < n; j++) {
            if(abs(arr[i]-arr[j]) <= k) {
                count++;
            }
        }

        max_count = max(max_count, count);
    }

    cout << max_count;
    return 0;
}